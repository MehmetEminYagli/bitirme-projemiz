using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    private int level = 1;
    private int düþmanSayýsý = 0;

    public void DüþmanÖldürüldü()
    {
        düþmanSayýsý++;

        LevelTamamlandýKontrolü();
    }

    private void LevelTamamlandýKontrolü()
    {
        if (düþmanSayýsý >= 10)
        {
            // "Winner" yazýsýný göster
            // Main menü ve next level butonlarýný aktif hale getir
        }
    }

    public void MainMenu()
    {
        // Ana menüye dön
    }

    public void NextLevel()
    {
        level++; // Level'i bir artýrýn

        string levelName = "Level" + level.ToString(); // Bir sonraki level'in sahne adýný oluþturun

        SceneManager.LoadScene(levelName); // Bir sonraki level'in sahnesini yükleyin
    }
}
