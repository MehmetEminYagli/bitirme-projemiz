using System.Collections;
using UnityEngine;
using UnityEngine.AI;
public class ZombiSaldırı : MonoBehaviour
{
    public int damageAmount = 10;
    private void OnTriggerEnter(Collider other)
    {
        SağlıkDurumu healthController = other.GetComponent<SağlıkDurumu>();
        if (healthController != null)
        {
            healthController.TakeDamage(damageAmount);
        }
    }

    public Transform target; // Karakterin transformu
    public float speed = 5f; // Düşmanın yürüme hızı
    public float attackDistance = 1.5f; // Düşmanın saldırı mesafesi
    public float attackCooldown = 2f; // Saldırı aralığı
    public Animator animator; // Düşmanın Animator component'i

    [SerializeField] float currentHealth;
    [SerializeField] ZombiCanBar HealthbarScript;                 // zombi can durumu bakma 
    [HideInInspector] public float enemymaxHealt = 20f;

    private bool canAttack = true; // Saldırı yapabilme durumu

    void Start()
    {
        target = GameObject.FindGameObjectWithTag("Player").transform;
        animator = GetComponent<Animator>();
        currentHealth = enemymaxHealt;                                      //başlangıçta can değerini max a ayarla.
        HealthbarScript.HealthBarProgress(currentHealth, enemymaxHealt); // Zombicanbar scriptindeki healtbarprogress bileşeninin içine current ve enemymaxhealt değerini gönderir.
        HealthbarScript.transform.gameObject.SetActive(false); // healtbar scriptinin görünürlüğünü başlangıçta  kapatiyoruz.
    }

    void Update()
    {
        if (target == null)
            return;

        float distance = Vector3.Distance(transform.position, target.position);

        // Saldırı mesafesinde değilse yürümeye devam et
        if (distance > attackDistance)
        {
            animator.SetBool("isWalking", true);
            animator.SetBool("isAttacking", false);

            transform.LookAt(target.position);
            transform.Translate(Vector3.forward * speed * Time.deltaTime, Space.Self);
        }
        // Saldırı mesafesindeyse vurma animasyonunu oynat
        else
        {
            animator.SetBool("isWalking", false);

            if (canAttack)
            {
                animator.SetBool("isAttacking", true);
                StartCoroutine(AttackCooldown());
            }
        }
    }

    IEnumerator AttackCooldown()
    {
        canAttack = false;
        yield return new WaitForSeconds(attackCooldown);
        canAttack = true;
    }

    

    public void TakeDamage(float amount)
    {
        currentHealth -= amount;
        HealthbarScript.HealthBarProgress(currentHealth, enemymaxHealt);
        if (currentHealth <= 0f)
        {
            Die();
        }
    }

    void Die()
    {
        // Animator bileşeninin destroy edilip edilmediğini kontrol et
        Animator anim = GetComponent<Animator>();
        if (anim != null)
        {
            Destroy(anim);
        }

        // Tüm bileşenlerin destroy edilip edilmediğini kontrol et
        bool canDestroy = true;
        foreach (var component in GetComponents<Component>())
        {
            if (!(component is Transform) && component != this && component != anim)
            {
                if (component != null)
                {
                    Destroy(component);
                }
                else
                {
                    canDestroy = false;
                }
            }
        }

        // Tüm bileşenler destroy edilmişse gameObject da destroy edilir
        if (canDestroy)
        {
            Destroy(gameObject);
        }

    }
}

internal class HealthBar
{
}