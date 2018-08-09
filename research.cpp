#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{

    int gm, gd=DETECT;
    initgraph(&gd,&gm, "");
    //Moon
    int x=900,y=100;
    for (y=200; y>100; y--)
    {
        cleardevice();
        circle(x,y,50);
        setfillstyle(SOLID_FILL,LIGHTCYAN);//Color
        floodfill(x+1,y+1,WHITE);//Area
        delay(50);
        x++;
    }

    //Sun
    circle(1000,100,50);
    setfillstyle(SOLID_FILL,YELLOW);//Color
    floodfill(1001,101,WHITE);//Area

    line(900,100,950,100);
    line(1050,100,1100,100);
    line(900,50,960,70);
    line(1035,125,1100,150);
    line(1000,20,1000,50);
    line(1000,150,1000,200);
    line(1100,19,1040,80);
    line(970,135,900,200);

    //Bird
    //First Bird
    line(1200,100,1210,110);
    line(1210,110,1215,100);

    //Second Bird
    line(1220,100,1225,110);
    line(1225,110,1230,100);

    //Third Bird
    line(1240,100,1240,110);
    line(1240,110,1250,100);

    //Four Bird
    line(1210,120,1215,130);
    line(1215,130,1220,120);

    //Five Bird
    line(1230,120,1235,130);
    line(1235,130,1240,120);

    //Six Bird
    line(1220,140,1225,150);
    line(1225,150,1230,140);

    //Village House
    rectangle(900,400,1300,700);//Color
    setfillstyle(SOLID_FILL,GREEN);//Area
    floodfill(901,401,WHITE);

    //Village Door
    rectangle(1000,400,1200,700);//Color
    setfillstyle(SOLID_FILL,CYAN);//Area
    floodfill(1001,401,WHITE);

    //Center of Door
    rectangle(1095,400,1105,700);//Color
    setfillstyle(SOLID_FILL,MAGENTA);//Area
    floodfill(1096,401,WHITE);

    //Door Lock
    rectangle(1080,550,1090,560);//Color
    setfillstyle(SOLID_FILL,BROWN);//Area
    floodfill(1081,551,WHITE);

    rectangle(1110,550,1120,560);//Color
    setfillstyle(SOLID_FILL,BROWN);//Area
    floodfill(1111,551,WHITE);

    //House Roof
    rectangle(900,300,1300,399);//Color
    setfillstyle(SOLID_FILL,BROWN);//Area
    floodfill(901,301,WHITE);

    rectangle(900,300,1300,389);//Color
    setfillstyle(SOLID_FILL,GREEN);//Area
    floodfill(901,301,WHITE);

    rectangle(900,300,1300,379);//Color
    setfillstyle(SOLID_FILL,CYAN);//Area
    floodfill(901,301,WHITE);

    rectangle(900,300,1300,369);//Color
    setfillstyle(SOLID_FILL,MAGENTA);//Area
    floodfill(901,301,WHITE);

    rectangle(900,300,1300,359);//Color
    setfillstyle(SOLID_FILL,YELLOW);//Area
    floodfill(901,301,WHITE);

    rectangle(900,300,1300,349);//Color
    setfillstyle(SOLID_FILL,LIGHTBLUE);//Area
    floodfill(901,301,WHITE);

    rectangle(900,300,1300,339);//Color
    setfillstyle(SOLID_FILL,BROWN);//Area
    floodfill(901,301,WHITE);

    rectangle(900,300,1300,329);//Color
    setfillstyle(SOLID_FILL,GREEN);//Area
    floodfill(901,301,WHITE);

    rectangle(900,300,1300,319);//Color
    setfillstyle(SOLID_FILL,CYAN);//Area
    floodfill(901,301,WHITE);

    rectangle(900,300,1300,309);//Color
    setfillstyle(SOLID_FILL,MAGENTA);//Area
    floodfill(901,301,WHITE);

    //Tree
    line(100,100,200,100);
    line(120,50,180,150);
    line(150,50,150,200);


    line(300,100,400,100);
    line(320,50,380,150);
    line(350,50,350,200);

    line(500,100,600,100);
    line(520,50,580,150);
    line(550,50,550,200);

    //River
    line(0,200,400,500);
    line(400,500,300,500);
    line(300,500,800,900);

    //First Water
    circle(80,320,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(81,321,WHITE);//Area
    //Second
    circle(100,340,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(101,341,WHITE);//Area
    //Third
    circle(120,360,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(121,361,WHITE);//Area
    //Fourth
    circle(140,380,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(141,381,WHITE);//Area
    //Fifth
    circle(160,400,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(161,401,WHITE);//Area

    //Sixth
    circle(180,420,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(181,421,WHITE);//Area

    //Seventh
    circle(200,420,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(200,421,WHITE);//Area

    //Eighth
    circle(220,440,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(221,441,WHITE);//Area

    //Ninth
    circle(240,460,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(241,461,WHITE);//Area

    //10th
    circle(260,480,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(261,481,WHITE);//Area
    //11th
    circle(280,500,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(281,501,WHITE);//Area
    //12th
    circle(300,520,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(301,521,WHITE);//Area
    //13rd
    circle(320,540,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(321,541,WHITE);//Area
    //14th
    circle(340,560,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(341,561,WHITE);//Area
    //15th
    circle(360,580,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(361,581,WHITE);//Area
    //16th
    circle(380,600,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(381,601,WHITE);//Area
    //17th
    circle(400,620,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(401,621,WHITE);//Area
    //18th
    circle(420,640,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(421,641,WHITE);//Area
    //19th
    circle(440,660,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(441,661,WHITE);//Area
    //20th
    circle(460,680,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(461,681,WHITE);//Area
    ///21th
    circle(80,360,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(81,361,WHITE);//Area
    ///22th
    circle(100,380,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(101,381,WHITE);//Area
    ///23th
    circle(120,400,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(121,401,WHITE);//Area
    ///24th
    circle(140,420,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(141,421,WHITE);//Area
    ///25th
    circle(160,440,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(161,441,WHITE);//Area
    ///26th
    circle(180,460,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(181,461,WHITE);//Area
    ///27th
    circle(200,480,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(201,481,WHITE);//Area
    ///28th
    circle(220,500,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(221,501,WHITE);//Area
    ///29th
    circle(240,520,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(241,521,WHITE);//Area
    ///30th
    circle(260,540,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(261,541,WHITE);//Area
    ///31th
    circle(280,560,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(281,561,WHITE);//Area

    ///32th
    circle(300,560,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(301,560,WHITE);//Area
    ///33th
    circle(320,580,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(321,580,WHITE);//Area
    ///34th
    circle(340,600,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(341,600,WHITE);//Area
    ///35th
    circle(360,620,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(361,620,WHITE);//Area
    ///36th
    circle(380,640,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(381,640,WHITE);//Area
    ///37th
    circle(400,660,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(401,661,WHITE);//Area
    ///38th
    circle(420,680,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(421,681,WHITE);//Area
    ///39th
    circle(440,700,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(441,701,WHITE);//Area

    //
    circle(100,400,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(101,401,WHITE);//Area

    circle(120,420,5);
    setfillstyle(SOLID_FILL,CYAN);//Color
    floodfill(121,421,WHITE);//Area


    line(0,400,300,600);
    line(300,600,200,600);
    line(200,600,600,900);
    getch();
    //Extra Work for baby project
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
    closegraph();

}

