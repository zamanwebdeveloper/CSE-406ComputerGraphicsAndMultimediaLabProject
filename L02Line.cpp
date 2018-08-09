#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //Horizontal Line
    line(200,300,400,300);
    //Vertical Line
    line(600,200,600,400);
    getch();
    closegraph();
}
