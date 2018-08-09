#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    rectangle(200,100,700,400);//Color
    setfillstyle(SOLID_FILL,GREEN);//Area
    floodfill(201,101,WHITE);
    circle(425,250,100);
    setfillstyle(SOLID_FILL,RED);//Color
    floodfill(401,301,WHITE);//Area
    rectangle(190,100,200,700);//Color
    setfillstyle(SOLID_FILL,BROWN);//Area
    floodfill(191,101,WHITE);
    getch();
    closegraph();
}
