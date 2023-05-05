using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class karakterController : MonoBehaviour
{
    public float speed;
    public FixedJoystick variableJoystick;
    public Rigidbody rb;
    public Animator animator;

    private bool isWalking = false;


    //karakter sa�l�k
    public int startingHealth = 100;        // Ba�lang�� sa�l���
    public int currentHealth;               // Mevcut sa�l�k
    public Slider healthBar;                // Sa�l�k �ubu�u
    private bool isDead;                    // Karakterin �l�p �lmedi�ini tutar

    private void Start()
    {
        currentHealth = startingHealth;
        healthBar.maxValue = startingHealth; // Sa�l�k �ubu�u i�in maksimum de�eri ayarla
        healthBar.value = startingHealth; // Sa�l�k �ubu�unu ba�lang�� sa�l���na ayarla
    }

    public void TakeDamage(int damage)
    {
        if (isDead) return;

        currentHealth -= damage;
        currentHealth = Mathf.Clamp(currentHealth, 0, startingHealth); // Sa�l�k de�erini s�n�rland�r

        float healthPercentage = (float)currentHealth / (float)startingHealth;
        healthBar.value = currentHealth; // Sa�l�k �ubu�unu g�ncelle
        healthBar.transform.localScale = new Vector3(healthPercentage, 1, 1); // Sa�l�k �ubu�unun �l�eklendirilmi� geni�li�ini g�ncelle

        if (currentHealth <= 0)
        {
            Die();
        }
    }

    private void Die()
    {
        isDead = true;
        // Karakter �l�nce yap�lacak i�lemler
    }


    public void FixedUpdate()
    {
        // karakterin y�n�n� belirlemek i�in joystick'ten gelen y�n vekt�r�
        Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;

        if (direction.magnitude > 0)
        {
            isWalking = true;
        }
        else
        {
            isWalking = false;
        }

        animator.SetBool("isWalking", isWalking);

        // karakterin rotasyonunu g�ncelle
        if (direction != Vector3.zero)
        {
            Quaternion rotation = Quaternion.LookRotation(direction);
            rb.MoveRotation(rotation);
            rb.angularVelocity = Vector3.zero;
        }

        // karakteri hareket ettir
        rb.velocity = direction.normalized * speed;
    }
}
