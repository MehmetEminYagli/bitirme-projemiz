using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class biozombiespawn : MonoBehaviour
{
    public GameObject enemyPrefab; // D��man prefab'�
    public int maxEnemies = 10; // Spawn edilecek maksimum d��man say�s�
    public float spawnDelay = 1f; // Spawn aral��� (saniye)
    public float spawnRange = 15f; // Spawn aral��� (birim)

    private int spawnedEnemies = 0; // �u ana kadar spawn edilmi� d��man say�s�

    private void Start()
    {
        // Kamera y�ksekli�i ve rotasyonu ayarla
        Camera.main.transform.position = new Vector3(0f, 10f, 0f);
        Camera.main.transform.rotation = Quaternion.Euler(60f, 45f, 0f);

        StartCoroutine(SpawnEnemies());
    }

    private IEnumerator SpawnEnemies()
    {
        while (spawnedEnemies < maxEnemies)
        {
            yield return new WaitForSeconds(spawnDelay);

            // Rastgele spawn pozisyonu olu�tur
            Vector3 spawnPosition = new Vector3(Random.Range(-spawnRange, spawnRange), 0f, Random.Range(-spawnRange, spawnRange));

            // D��man� spawn et
            GameObject enemyObject = Instantiate(enemyPrefab, spawnPosition, Quaternion.identity);
            enemyObject.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);

            spawnedEnemies++;
        }

        // Maksimum d��man say�s�na ula��ld���nda yap�lacak i�lemler
        // Coroutine'i durdur
        StopCoroutine(SpawnEnemies());
    }
}
