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


    //karakter saðlýk
    public int startingHealth = 100;        // Baþlangýç saðlýðý
    public int currentHealth;               // Mevcut saðlýk
    public Slider healthBar;                // Saðlýk çubuðu
    private bool isDead;                    // Karakterin ölüp ölmediðini tutar

    private void Start()
    {
        currentHealth = startingHealth;
        healthBar.maxValue = startingHealth; // Saðlýk çubuðu için maksimum deðeri ayarla
        healthBar.value = startingHealth; // Saðlýk çubuðunu baþlangýç saðlýðýna ayarla
    }

    public void TakeDamage(int damage)
    {
        if (isDead) return;

        currentHealth -= damage;
        currentHealth = Mathf.Clamp(currentHealth, 0, startingHealth); // Saðlýk deðerini sýnýrlandýr

        float healthPercentage = (float)currentHealth / (float)startingHealth;
        healthBar.value = currentHealth; // Saðlýk çubuðunu güncelle
        healthBar.transform.localScale = new Vector3(healthPercentage, 1, 1); // Saðlýk çubuðunun ölçeklendirilmiþ geniþliðini güncelle

        if (currentHealth <= 0)
        {
            Die();
        }
    }

    private void Die()
    {
        isDead = true;
        // Karakter ölünce yapýlacak iþlemler
    }


    public void FixedUpdate()
    {
        // karakterin yönünü belirlemek için joystick'ten gelen yön vektörü
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

        // karakterin rotasyonunu güncelle
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
