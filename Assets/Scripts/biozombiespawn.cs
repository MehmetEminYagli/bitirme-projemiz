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

    public float mapBoundary = 20f; // Harita s�n�rlar�

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

            // Karakterin y�ksekli�ini al
            float playerY = transform.position.y;

            // Rastgele spawn pozisyonu olu�tur
            Vector3 spawnPosition = new Vector3(Random.Range(-spawnRange, spawnRange), playerY, Random.Range(-spawnRange, spawnRange));
            spawnPosition = ClampPositionToMap(spawnPosition);

            // D��man� spawn et
            GameObject enemyObject = Instantiate(enemyPrefab, spawnPosition, Quaternion.identity);
            enemyObject.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);

            enemyObject.GetComponent<Rigidbody>().useGravity = true; // Yer�ekimini etkinle�tir

            spawnedEnemies++;
        }

        // Maksimum d��man say�s�na ula��ld���nda yap�lacak i�lemler
        // Coroutine'i durdur
        StopCoroutine(SpawnEnemies());
    }

    private Vector3 ClampPositionToMap(Vector3 position)
    {
        // Harita s�n�rlar�n� kontrol et ve pozisyonu s�n�rla
        float minX = -mapBoundary;
        float maxX = mapBoundary;
        float minZ = -mapBoundary;
        float maxZ = mapBoundary;

        position.x = Mathf.Clamp(position.x, minX, maxX);
        position.z = Mathf.Clamp(position.z, minZ, maxZ);

        return position;
    }

}
