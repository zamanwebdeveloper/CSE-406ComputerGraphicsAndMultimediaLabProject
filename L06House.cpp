#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //Village House
    rectangle(500,300,900,600);//Color
    setfillstyle(SOLID_FILL,GREEN);//Area
    floodfill(501,301,WHITE);
    //Village Door
    rectangle(600,300,800,600);//Color
    setfillstyle(SOLID_FILL,CYAN);//Area
    floodfill(601,301,WHITE);
    //Center of Door
    rectangle(695,300,705,600);//Color
    setfillstyle(SOLID_FILL,MAGENTA);//Area
    floodfill(696,301,WHITE);
    //Door 1st Lock
    rectangle(680,445,690,455);//Color
    setfillstyle(SOLID_FILL,BROWN);//Area
    floodfill(686,451,WHITE);
    //Door Second Lock
    rectangle(715,445,725,455);//Color
    setfillstyle(SOLID_FILL,BROWN);//Area
    floodfill(716,446,WHITE);
    //House Roof
    rectangle(500,300,900,200);//Color
    setfillstyle(SOLID_FILL,BROWN);//Area
    floodfill(501,299,WHITE);
    getch();
    closegraph();
}
