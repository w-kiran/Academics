#include<graphics.h>
#include<conio.h>
int main(){
 printf("Kiran Joshi Sukubhattu\n");
 int gd= DETECT, gm;
 initgraph(&gd, &gm,"");
 //Setting filling style
 setfillstyle(SOLID_FILL,WHITE) ;//setfillstyle(int pattern, int color);
 //Drawing circle
 circle(300,150,50) ; //circle(int x, int y, int radius);
 //Filling color inside a boundary.
 floodfill(301,150, WHITE); //floodfill(int x , int y, int bordercolor);
 setfillstyle(SOLID_FILL,WHITE) ;
 //drawing ellipse
 ellipse(300,350,0,360,100,50) ; //elLipse(int x, int y, int startangle, int endangle, int xradius, int yradius);
 floodfill(301,350,WHITE);
 //setting color
 setcolor (WHITE) ;//setcolor (int color)
 //line drawing
 line (150,150,50,150) ;
 //Line (int x1, int y1, int x2, int y2)
 getch();
 closegraph();
 return 0;
}
