using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class atesetmesistemi : MonoBehaviour
{
    public int maxAmmo = 30; // Maksimum mermi sayýsý
    public float fireRate = 2f; // Ateþ hýzý (saniyede kaç kez ateþ edeceði)
    public int bulletsPerShot = 3; // Ayný anda kaç mermi ateþlenecek
    public float bulletSpread = 1f; // Mermilerin ne kadar yayýlacaðý
    public float reloadTime = 2f; // Yeniden yükleme süresi
   // public GameObject muzzleFlashPrefab; // Ateþ efekti prefab'i
    public GameObject bulletPrefab; // Mermi prefab'i
    public float bulletSpeed = 10f; // Mermi hareket hýzý

    private int currentAmmo; // Mevcut mermi sayýsý
    private float nextFireTime; // Sonraki ateþ zamaný

    private void Start()
    {
        currentAmmo = maxAmmo; // Baþlangýçta mermi sayýsý maksimum olacak
    }

    private void Update()
    {
        // Ateþ etmek için hazýr mýyýz?
        if (Time.time >= nextFireTime && currentAmmo > 0)
        {
            // Mermi sayýsýný azalt
            currentAmmo -= bulletsPerShot;

            // Mermilerin yayýlmasýný hesapla
            float angleStep = bulletSpread / (bulletsPerShot - 1);
            float angle = -bulletSpread / 2f;

            // Her mermi için ateþ et
            for (int i = 0; i < bulletsPerShot; i++)
            {
                // Mermi oluþtur
                GameObject bullet = Instantiate(bulletPrefab, transform.position, transform.rotation);
                Destroy(bullet, 2f); // Mermi 5 saniye sonra yok olacak

                // Mermiye rastgele bir yön ver
                Vector2 direction = Quaternion.Euler(0, 0, angle) * transform.right;

                // Mermiyi ateþle
                bullet.GetComponent<Rigidbody>().velocity = direction * bulletSpeed;

                // Açýyý artýr
                angle += angleStep;
            }

            // Ateþ efekti oluþtur
         /*   GameObject muzzleFlash = Instantiate(muzzleFlashPrefab, transform.position, transform.rotation);
            Destroy(muzzleFlash, 0.2f);*/

            // Sonraki ateþ zamanýný hesapla
            nextFireTime = Time.time + 1f / fireRate;

            // Mermi sayýsý sýfýr olduysa, yeniden yükle
            if (currentAmmo == 0)
            {
                nextFireTime += reloadTime;
                currentAmmo = maxAmmo;
            }
        }
    }



}
