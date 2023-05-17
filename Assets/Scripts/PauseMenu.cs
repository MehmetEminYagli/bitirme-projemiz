using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class PauseMenu : MonoBehaviour
{
    public GameObject pauseMenu;
    public bool isPaused;
    private Button PauseButton;
    void Start()
    {
        pauseMenu.SetActive(false);
        PauseButton = GetComponent<Button>(); // Buton bile�enini al�n
        PauseButton.onClick.AddListener(PauseGame); // Butona t�kland���nda OnClick metodu �a�r�ls�n
        
    }


    void Update()
    {
        if (PauseButton == true )
        {
            if (isPaused)
            {
                ResumeGame();
            }
            else
            {
                PauseGame();
            }
        }
    }

    public void PauseGame()
    {
        pauseMenu.SetActive(true);
        Time.timeScale = 0f;
        isPaused = true;
    }
    public void ResumeGame()
    {
        pauseMenu.SetActive(false);
        Time.timeScale = 1f;
        isPaused = false;
    }
    public void GotoMainMenu()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(0);
    }
    public void QuiitGame()
    {
        Debug.Log("Kapat�ld�");
        Application.Quit();
    }
}
