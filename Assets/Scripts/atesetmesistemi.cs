using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class atesetmesistemi : MonoBehaviour
{
    public float damage = 10f;
    public float range = 100f;
    public float fireRate = 15f;
    public float impactForce = 30f;
    public Camera fpsCam;
    public ParticleSystem muzzleFlash;
    public GameObject impactEffect;

    private float nextTimeToFire = 0f;

    public float detectionRadius = 10f; // algýlama yarýçapý
    public LayerMask enemyLayer; // düþmanlarýn bulunacaðý katman
    private Collider[] colliders; // çember içindeki colliderlarý depolamak için bir dizi


    private void Update()
    {
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, detectionRadius, enemyLayer);

        int i = 0;
        while (i < hitColliders.Length)
        {
            Debug.Log("Düþman bulundu: " + hitColliders[i].gameObject.name);
            i++;
        }

        
        if (Input.GetButton("Fire1") && Time.time >= nextTimeToFire)
        {
            nextTimeToFire = Time.time + 1f / fireRate;
            Shoot();
        }
    }

    void Shoot()
    {
        muzzleFlash.Play();

        RaycastHit hit;
        if (Physics.Raycast(fpsCam.transform.position, fpsCam.transform.forward, out hit, range))
        {
            Debug.Log(hit.transform.name);
            ZombiSaldýrý enemy = hit.transform.GetComponent<ZombiSaldýrý>();
            if (enemy != null)
            {
                enemy.TakeDamage(damage);
            }
            if (hit.rigidbody != null)
            {
                hit.rigidbody.AddForce(-hit.normal * impactForce);
            }
            GameObject impactGO = Instantiate(impactEffect, hit.point, Quaternion.LookRotation(hit.normal));
            Destroy(impactGO, 2f);
        }
    }

   


}
