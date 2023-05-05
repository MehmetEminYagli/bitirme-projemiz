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

    void Update()
    {
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




}
