#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
    int x1,x2,y1,y2,ra,x,y,l,tp,rh,bm;
    //Drawing for line
    printf("Enter an integer for line Drawing X1: ");
    scanf("%d", &x1);
    printf("Enter an integer for line Drawing Y1: ");
    scanf("%d", &y1);
    printf("Enter an integer for line Drawing X2: ");
    scanf("%d", &x2);
    printf("Enter an integer for line Drawing Y2: ");
    scanf("%d", &y2);
    // Drawing for Circle
    printf("Enter an integer for Circle Drawing X: ");
    scanf("%d", &x);
    printf("Enter an integer for Circle Drawing Y: ");
    scanf("%d", &y);
    printf("Enter an integer for Circle Radius Drawing: ");
    scanf("%d", &ra);
    //Drawing for Rectangle
    printf("Enter an integer for Rectangle Left Drawing: ");
    scanf("%d", &l);
    printf("Enter an integer for Rectangle Top Drawing: ");
    scanf("%d", &tp);
    printf("Enter an integer for Rectangle Right Drawing: ");
    scanf("%d", &rh);
    printf("Enter an integer for Rectangle Bottom Drawing: ");
    scanf("%d", &bm);
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    line(x1,y1,x2,y2);
    circle(x, y, ra);
    rectangle(l,tp,rh,bm);
    getch();
    closegraph();
    return 0;
}
