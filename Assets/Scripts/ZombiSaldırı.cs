using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombiSaldırı : MonoBehaviour
{
    public int damageAmount = 10;
    //zombi takip
    public GameObject Target;
    public float speed = 1.5f;

    private void OnTriggerEnter(Collider other)
    {
        SağlıkDurumu healthController = other.GetComponent<SağlıkDurumu>();
        if (healthController != null)
        {
            healthController.TakeDamage(damageAmount);
        }
    }

    private void FixedUpdate()
    {
        transform.LookAt(Target.gameObject.transform);
        transform.Translate(Vector3.forward * Time.deltaTime * speed);
    }


}
