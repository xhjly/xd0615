//定义五种发声频率
//一共发声8次
#define NOTE_C4  262
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};//用数组存储每次发声的频率
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};//每次发声的时长分别为1000/4 1000/8 1000/8 ms

void setup() {
 //循环8次来完成8次发声
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {

   
    int noteDuration =  1000/noteDurations[thisNote];//每次发声的时长
    tone(8, melody[thisNote], noteDuration);//tone(pin, frequency, durationpin: 发声引脚（该引脚需要连接扬声器）
//frequency: 发声频率（单位：赫兹） – 无符号整数型
//duration: 发声时长（单位：微秒，此参数为可选参数) – 无符号长整型)
//这里8引脚为发声引脚，melody[thisNote]为每次发声频率，noteDuration为每次发声时长
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
   //1.3倍发声时长后，用notone函数停止发声，1.3倍猜测是为了使每次发声之间有明显间隔
    noTone(8);
  }
}

void loop() 
{
 
}