#include <reg52.h>
#define uchar unsigned char
#define uint unsigned int
unsigned char code YY[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
unsigned char code XX[10][8]=
{
{0x00,0x00,0x3e,0x41,0x41,0x41,0x3e,0x00}, //0
{0x00,0x00,0x00,0x00,0x21,0x7f,0x01,0x00}, //1
{0x00,0x00,0x27,0x45,0x45,0x45,0x39,0x00}, //2
{0x00,0x00,0x22,0x49,0x49,0x49,0x36,0x00}, //3
{0x00,0x00,0x0c,0x14,0x24,0x7f,0x04,0x00}, //4
{0x00,0x00,0x72,0x51,0x51,0x51,0x4e,0x00}, //5
{0x00,0x00,0x3e,0x49,0x49,0x49,0x26,0x00}, //6
{0x00,0x00,0x40,0x40,0x40,0x4f,0x70,0x00}, //7
{0x00,0x00,0x36,0x49,0x49,0x49,0x36,0x00}, //8
{0x00,0x00,0x32,0x49,0x49,0x49,0x3e,0x00}, //9
};

uchar i,k,j,t=0;
void delay(uchar ms)
{
  while(ms--)
   {
    for (i=0;i<100;i++);
   }
}

void main()
{
 while(1)
    {
    for(t=0;t<10;t++)
          {
       for(j=1;j<50;j++)
        {
          for(k=0;k<8;k++)
           {
            P0=YY[k];
            P1=~XX[t][k];
            delay(3);
           }
           }
          }
    }
}