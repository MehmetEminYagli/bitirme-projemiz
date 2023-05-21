using UnityEngine;
using UnityEngine.SceneManagement;
    
public class LevelManager : MonoBehaviour
{
    private int level = 1;
    private int düþmanSayýsý = 0;
    public GameObject winnerpanel;
    
    public GameObject karaktercangostergesi;
    public GameObject pausebuton;
    public GameObject karakterhareketcanvas;


    private void Start()
    {
        winnerpanel.SetActive(false);
      
    }
 
    public void DüþmanÖldürüldü()
    {
        düþmanSayýsý++;
     
        LevelTamamlandýKontrolü();
    }

    private void LevelTamamlandýKontrolü()
    {
        if (düþmanSayýsý >= 10)
        {
            winnerpanel.SetActive(true);
            karaktercangostergesi.SetActive(false);
            karakterhareketcanvas.SetActive(false);
            pausebuton.SetActive(false);
            // "Winner" yazýsýný göster
            // Main menü ve next level butonlarýný aktif hale getir
        }
    }

    public void MainMenu()
    {
        SceneManager.LoadScene(0); // Panel sýralamasýndaki 0. yi getirir yani mainmenü panelini.
    }

    public void NextLevel()
    {
        level++; // Level'i bir artýrýn

        string levelName = "Level" + level.ToString(); // Bir sonraki level'in sahne adýný oluþturun

        SceneManager.LoadScene(levelName); // Bir sonraki level'in sahnesini yükleyin
    }
}
