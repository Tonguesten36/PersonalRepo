using System.Media;
using System.Windows.Forms;

namespace WindowsFormsApp3
{
    class MusicPlayer
    {
        SoundPlayer soundPlayer;

        bool hasMusicLoaded;
        bool isPlayingMusic;

        public MusicPlayer()
        {
            soundPlayer = new SoundPlayer();
            hasMusicLoaded = false;
            isPlayingMusic = false;
        }
        public void PlayMusic()
        {
            soundPlayer.Play();
            isPlayingMusic = true;
        }
        public void PauseMusic()
        {
            soundPlayer.Stop();
            isPlayingMusic = false;
        }
        public void LoadMusic()
        {
            soundPlayer.Load();
            hasMusicLoaded = true;
        }
        public void BrowseMusic(OpenFileDialog openFileDialog, TextBox filePathTextBox)
        {
            openFileDialog = new OpenFileDialog();
            openFileDialog.InitialDirectory = @"c:\Users\Personal\Music";

            openFileDialog.CheckFileExists = true;

            openFileDialog.Filter = "WAV files (*.wav)|*.wav";
            openFileDialog.DefaultExt = ".wav";

            if(openFileDialog.ShowDialog() == DialogResult.OK)
            {
                filePathTextBox.Text = openFileDialog.FileName;
                soundPlayer.SoundLocation = filePathTextBox.Text;
                hasMusicLoaded = true;
            }
        }
        public void ShowAboutProgram(Form aboutForm)
        {
            if(aboutForm != null)
            {
                string aboutText = "This music player was developed by Tonguesten\nMade with Visual Studio 2019 - Written in C#";
                MessageBox.Show(aboutText);
            }
        }
        public void DisplayMusicPlayerStatus(Label musicStatusLabel)
        {
            if(!hasMusicLoaded)
            {
                musicStatusLabel.Text = "There is no song loaded. Click 'Browse' to load a song";
            }
            else
            {
                if (!isPlayingMusic)
                {
                    musicStatusLabel.Text = "Currently not playing music.";
                }
                else
                {
                    musicStatusLabel.Text = "Now playing music.";
                }
            }

        }
    }
}
