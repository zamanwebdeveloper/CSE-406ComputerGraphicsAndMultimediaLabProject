#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int maxX=1300;
    for(int i=0;i<maxX;i++)
    {
        //Road
        setcolor(DARKGRAY);
        line(0, 370, maxX, 370);
        //Sun
        setcolor(YELLOW);
        circle(80+i,80,50);
        //VCR Games Board
        setcolor(WHITE);
        rectangle(525,250,535,370);
        rectangle(480,200,580,250);
        outtextxy(490,220,"Dhaka Road");
        //Bus
        setcolor(BLUE);
        rectangle(100+i,300,200+i,350);
        setcolor(GREEN);
        circle(120+i,360,10);
        circle(180+i,360,10);

        delay(20);
        cleardevice();

    }


    getch();

}
