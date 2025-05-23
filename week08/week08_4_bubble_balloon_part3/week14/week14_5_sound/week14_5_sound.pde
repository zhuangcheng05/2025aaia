//week14_5_sound
//選單sketch - library - manage liberaries...
//安裝sound後 開始寫
//選單File - Example 選 Libraries核心函式庫 Sound-Soundfile
//在自己寫
import processing.sound.*;//Java 使用 Sound 外掛
SoundFile music,sword,monkey,intro;//宣告一個變數music
void setup() {
  size(640, 360);//記得把音檔拉近程式裡面
  sword = new SoundFile(this,"sword slash.mp3");
  monkey = new SoundFile(this,"Monkey 1.mp3");
  intro = new SoundFile(this,"Intro Song_Final.mp3");
  music = new SoundFile(this,"In Game Music.mp3");
  music.play();//play()播放
}
void mousePressed(){//按下滑鼠
  if(mouseButton==LEFT);//按下左鍵(揮劍)
  else monkey.play();//按下另一個建(變猴子叫)
}
void draw(){
  //裡面是空白的
}
