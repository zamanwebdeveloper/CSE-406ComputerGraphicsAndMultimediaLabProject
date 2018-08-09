#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x,y;
    x=getmaxx();
    y=getmaxy();
    printf("%d",x);
    printf("%d",y);
    line(x/2,0,x/2,y);
    line(0,y/2,x,y/2);
    line(350,450,350,250);
    line(550,350,550,250);
    line(550,350,350,350);
    line(550,250,350,250);
    circle(450,300,40);
    getch();
    closegraph();
}
