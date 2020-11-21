using System;
using System.ComponentModel;
using System.Media;
using System.Windows.Forms;

namespace WindowsFormsApp3
{
    public partial class MainForm : Form
    {
        MusicPlayer musicPlayer;
        OpenFileDialog openFileDialog;

        public MainForm()
        {
            InitializeComponent();

            musicPlayer = new MusicPlayer();
            MusicPlayerStatus();
        }
 
        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void PlayButton_Click(object sender, EventArgs e)
        {
            musicPlayer.PlayMusic();
            MusicPlayerStatus();
        }

        private void PauseButton_Click(object sender, EventArgs e)
        {
            musicPlayer.PauseMusic();
            MusicPlayerStatus();
        }

        private void openFileDialog1_FileOk(object sender, CancelEventArgs e)
        {
            
        }

        private void BrowseFile_Click(object sender, EventArgs e)
        {
            musicPlayer.BrowseMusic(openFileDialog, filePath);
            MusicPlayerStatus();
        }

        private void AboutProgram_Click(object sender, EventArgs e)
        {
            Form aboutForm = new Form();
            musicPlayer.ShowAboutProgram(aboutForm);
        }

        private void MusicPlayerStatus()
        {
            musicPlayer.DisplayMusicPlayerStatus(musicStatusIndicator);
        }
    }
}
