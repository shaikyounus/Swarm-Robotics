#include<reg52.h>
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x0f;
#define rev 0x05;
unsigned int a;
void main()
{
while(1)
{
a=P1&0x0f;

 if(a==0X06)
 {
 P2=lt;
 }=

if(a==0x09)
{P2=rt;
}

if(a==0x0a)
{P2=st;
}

if(a==0x0f)
{P2=stop;
}









}
}


