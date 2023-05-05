using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawn : MonoBehaviour
{
    [SerializeField]
    private GameObject followerPrefab;

    [SerializeField]
    private float followerInterval = 1;

    private int x;

    private bool isSpawning = true;

    void Start()
    {
        x = 0;
        StartCoroutine(spawnEnemy(followerInterval, followerPrefab));
    }

    private IEnumerator spawnEnemy(float interval, GameObject enemy)
    {
        yield return new WaitForSeconds(2);

        if (isSpawning && x < 50) // respawn durumunu ve düþman sayýsýný kontrol edin
        {
            GameObject newEnemy = Instantiate(enemy, new Vector3(Random.Range(-5f, 5), Random.Range(-6f, 6f), 0), Quaternion.identity);
            x++;

            if (x == 50)
            {
                isSpawning = false;
                Destroy(enemy);
            }
            else
            {
                StartCoroutine(spawnEnemy(interval, enemy));
            }
        }
    }
}