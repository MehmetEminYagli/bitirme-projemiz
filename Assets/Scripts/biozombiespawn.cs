using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class biozombiespawn : MonoBehaviour
{
    public GameObject enemyPrefab; // Düþman prefab'ý
    public int maxEnemies = 10; // Spawn edilecek maksimum düþman sayýsý
    public float spawnDelay = 1f; // Spawn aralýðý (saniye)
    public float spawnRange = 15f; // Spawn aralýðý (birim)

    private int spawnedEnemies = 0; // Þu ana kadar spawn edilmiþ düþman sayýsý

    private void Start()
    {
        // Kamera yüksekliði ve rotasyonu ayarla
        Camera.main.transform.position = new Vector3(0f, 10f, 0f);
        Camera.main.transform.rotation = Quaternion.Euler(60f, 45f, 0f);

        StartCoroutine(SpawnEnemies());
    }

    private IEnumerator SpawnEnemies()
    {
        while (spawnedEnemies < maxEnemies)
        {
            yield return new WaitForSeconds(spawnDelay);

            // Rastgele spawn pozisyonu oluþtur
            Vector3 spawnPosition = new Vector3(Random.Range(-spawnRange, spawnRange), 0f, Random.Range(-spawnRange, spawnRange));

            // Düþmaný spawn et
            GameObject enemyObject = Instantiate(enemyPrefab, spawnPosition, Quaternion.identity);
            enemyObject.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);

            spawnedEnemies++;
        }

        // Maksimum düþman sayýsýna ulaþýldýðýnda yapýlacak iþlemler
        // Coroutine'i durdur
        StopCoroutine(SpawnEnemies());
    }
}
