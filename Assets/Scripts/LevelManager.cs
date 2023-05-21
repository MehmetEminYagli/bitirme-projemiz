using UnityEngine;
using UnityEngine.SceneManagement;
    
public class LevelManager : MonoBehaviour
{
    private int level = 1;
    private int düşmanSayısı = 0;
    public GameObject winnerpanel;
    
    public GameObject karaktercangostergesi;
    public GameObject pausebuton;
    public GameObject karakterhareketcanvas;


    private void Start()
    {
        winnerpanel.SetActive(false);
      
    }
 
    public void DüşmanÖldürüldü()
    {
        düşmanSayısı++;
     
        LevelTamamlandıKontrolü();
    }

    private void LevelTamamlandıKontrolü()
    {
        if (düşmanSayısı >= 10)
        {
            winnerpanel.SetActive(true);
            karaktercangostergesi.SetActive(false);
            karakterhareketcanvas.SetActive(false);
            pausebuton.SetActive(false);
            // "Winner" yazısını göster
            // Main menü ve next level butonlarını aktif hale getir
        }
    }

    public void MainMenu()
    {
        SceneManager.LoadScene(0); // Panel sıralamasındaki 0. yi getirir yani mainmenü panelini.
    }

    public void NextLevel()
    {
        level++; // Level'i bir artırın

        string levelName = "Level" + level.ToString(); // Bir sonraki level'in sahne adını oluşturun

        SceneManager.LoadScene(levelName); // Bir sonraki level'in sahnesini yükleyin
    }
}
