using UnityEngine;
using UnityEngine.SceneManagement;
    
public class LevelManager : MonoBehaviour
{
    private int level = 1;
    private int d��manSay�s� = 0;
    public GameObject winnerpanel;
    
    public GameObject karaktercangostergesi;
    public GameObject pausebuton;
    public GameObject karakterhareketcanvas;


    private void Start()
    {
        winnerpanel.SetActive(false);
      
    }
 
    public void D��man�ld�r�ld�()
    {
        d��manSay�s�++;
     
        LevelTamamland�Kontrol�();
    }

    private void LevelTamamland�Kontrol�()
    {
        if (d��manSay�s� >= 10)
        {
            winnerpanel.SetActive(true);
            karaktercangostergesi.SetActive(false);
            karakterhareketcanvas.SetActive(false);
            pausebuton.SetActive(false);
            // "Winner" yaz�s�n� g�ster
            // Main men� ve next level butonlar�n� aktif hale getir
        }
    }

    public void MainMenu()
    {
        SceneManager.LoadScene(0); // Panel s�ralamas�ndaki 0. yi getirir yani mainmen� panelini.
    }

    public void NextLevel()
    {
        level++; // Level'i bir art�r�n

        string levelName = "Level" + level.ToString(); // Bir sonraki level'in sahne ad�n� olu�turun

        SceneManager.LoadScene(levelName); // Bir sonraki level'in sahnesini y�kleyin
    }
}
