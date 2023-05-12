using System.Collections;
using UnityEngine;

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


    private bool canAttack = true; // Saldırı yapabilme durumu

    void Start()
    {
        target = GameObject.FindGameObjectWithTag("Player").transform;
        animator = GetComponent<Animator>();
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

    public float health = 50f;

    public void TakeDamage(float amount)
    {
        health -= amount;
        if (health <= 0f)
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
