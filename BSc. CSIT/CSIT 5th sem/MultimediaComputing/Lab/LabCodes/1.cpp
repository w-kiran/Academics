#include<graphics.h>
#include<conio.h>
int main(){
printf("Kiran Joshi Sukubhattu\n");
int gd= DETECT, gm;
initgraph(&gd,&gm,"");
for (int i=1;i<=5;i++)
{
//setting color for text
setcolor (WHITE);//setcolor (int color) ;
//changing fontface, orientation and size;
settextstyle(i,0,i);//settextstyle(int font, int orientation, int size);
//print the desired message.
outtextxy (100, 30*i, "I am Kiran!"); //outtextxy(int x, int y, char value)
}
getch();
closegraph();
return 0;
}
