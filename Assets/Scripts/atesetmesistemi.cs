using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class atesetmesistemi : MonoBehaviour
{
    public int maxAmmo = 30; // Maksimum mermi say�s�
    public float fireRate = 2f; // Ate� h�z� (saniyede ka� kez ate� edece�i)
    public int bulletsPerShot = 3; // Ayn� anda ka� mermi ate�lenecek
    public float bulletSpread = 1f; // Mermilerin ne kadar yay�laca��
    public float reloadTime = 2f; // Yeniden y�kleme s�resi
   // public GameObject muzzleFlashPrefab; // Ate� efekti prefab'i
    public GameObject bulletPrefab; // Mermi prefab'i
    public float bulletSpeed = 10f; // Mermi hareket h�z�

    private int currentAmmo; // Mevcut mermi say�s�
    private float nextFireTime; // Sonraki ate� zaman�

    private void Start()
    {
        currentAmmo = maxAmmo; // Ba�lang��ta mermi say�s� maksimum olacak
    }

    private void Update()
    {
        // Ate� etmek i�in haz�r m�y�z?
        if (Time.time >= nextFireTime && currentAmmo > 0)
        {
            // Mermi say�s�n� azalt
            currentAmmo -= bulletsPerShot;

            // Mermilerin yay�lmas�n� hesapla
            float angleStep = bulletSpread / (bulletsPerShot - 1);
            float angle = -bulletSpread / 2f;

            // Her mermi i�in ate� et
            for (int i = 0; i < bulletsPerShot; i++)
            {
                // Mermi olu�tur
                GameObject bullet = Instantiate(bulletPrefab, transform.position, transform.rotation);
                Destroy(bullet, 2f); // Mermi 5 saniye sonra yok olacak

                // Mermiye rastgele bir y�n ver
                Vector2 direction = Quaternion.Euler(0, 0, angle) * transform.right;

                // Mermiyi ate�le
                bullet.GetComponent<Rigidbody>().velocity = direction * bulletSpeed;

                // A��y� art�r
                angle += angleStep;
            }

            // Ate� efekti olu�tur
         /*   GameObject muzzleFlash = Instantiate(muzzleFlashPrefab, transform.position, transform.rotation);
            Destroy(muzzleFlash, 0.2f);*/

            // Sonraki ate� zaman�n� hesapla
            nextFireTime = Time.time + 1f / fireRate;

            // Mermi say�s� s�f�r olduysa, yeniden y�kle
            if (currentAmmo == 0)
            {
                nextFireTime += reloadTime;
                currentAmmo = maxAmmo;
            }
        }
    }



}
