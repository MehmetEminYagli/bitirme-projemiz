using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class biozombiespawn : MonoBehaviour
{

    public GameObject enemyPrefab;
    public int maxEnemies;
    public float spawnDelay;
    public float spawnRange = 15f;
    private int spawnedEnemies = 0;
    public float mapBoundary = 20f;

    private void Start()
    {
        Camera.main.transform.position = new Vector3(0f, 10f, 0f);
        Camera.main.transform.rotation = Quaternion.Euler(60f, 45f, 0f);
        StartCoroutine(SpawnEnemies());
    }

    private IEnumerator SpawnEnemies()
    {
        while (spawnedEnemies < maxEnemies)
        {
            yield return new WaitForSeconds(spawnDelay);
            float playerY = transform.position.y;

            // Seed deðerini güncelle
            int seed = (int)(Time.time * 1000);
            Random.InitState(seed);

            Vector3 spawnPosition = new Vector3(Random.Range(-spawnRange, spawnRange), playerY, Random.Range(-spawnRange, spawnRange));
            spawnPosition = ClampPositionToMap(spawnPosition);
            GameObject enemyObject = Instantiate(enemyPrefab, spawnPosition, Quaternion.identity);
            enemyObject.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
            enemyObject.GetComponent<Rigidbody>().useGravity = true;
            spawnedEnemies++;
        }
        StopCoroutine(SpawnEnemies());
    }

    private Vector3 ClampPositionToMap(Vector3 position)
    {
        float minX = -mapBoundary;
        float maxX = mapBoundary;
        float minZ = -mapBoundary;
        float maxZ = mapBoundary;
        position.x = Mathf.Clamp(position.x, minX, maxX);
        position.z = Mathf.Clamp(position.z, minZ, maxZ);
        return position;
    }

}
