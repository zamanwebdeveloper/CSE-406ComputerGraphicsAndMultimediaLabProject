#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    circle(500,300,100);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(501,301,WHITE);//Area
    getch();
    closegraph();
}
