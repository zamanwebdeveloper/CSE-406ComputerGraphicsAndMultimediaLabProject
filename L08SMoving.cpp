#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main()
{
    int d,m;
    int x=25,y=30;
    d=DETECT;
    initgraph(&d,&m,"c:\\tc\\bgi");

    for (y=430; y>30; y--)
    {
        cleardevice();
        circle(x,y,20);
        delay(10);
        x++;
    }
    for (y=30; y<=530; y++)
    {
        cleardevice();
        circle(x,y,20);
        delay(10);
        x--;
    }
}

