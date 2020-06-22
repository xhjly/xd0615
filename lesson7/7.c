#include <MsTimer2.h>     //定时器库的头文件
#define LN1 3
#define LN2 4
#define LN3 5
#define LN4 6
byte income=0;
void my1()
{
   income-='0';
   digitalWrite(LN1,income&0x1);
   digitalWrite(LN2,(income>>1)&0x1);
   digitalWrite(LN3,(income>>2)&0x1);
   digitalWrite(LN4,(income>>3)&0x1);
   income+='0';
   if(income<=9)
   {
     income++;
   }
   else
   {
     income=0;//超出9归零
   }
}
void my2()
{
  income=0;//按钮归零
}  
void setup()
{
  pinMode(LN1,OUTPUT);//输出1
  pinMode(LN2,OUTPUT);//输出2
  pinMode(LN3,OUTPUT);//输出3
  pinMode(LN4,OUTPUT);//输出4
  attachInterrupt( digitalPinToInterrupt(2), my2, CHANGE);//按钮变化
  MsTimer2::set(1000, my1); //设置中断，每1000ms进入一次中断服务程序 onTimer()
  MsTimer2::start(); //开始计时 
}
 void loop()
 {
   
 }