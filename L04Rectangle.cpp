#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    rectangle(400,300,800,500);//Color
    setfillstyle(SOLID_FILL,MAGENTA);//Area
    floodfill(401,301,WHITE);
    getch();
    closegraph();
}
