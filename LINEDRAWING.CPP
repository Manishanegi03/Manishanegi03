#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
  int gdriver=DETECT,gmode;
 int x,y,x1,y1,x2,y2,dx,dy,xinc,yinc,steps,i;
 clrscr();
 initgraph(&gdriver,&gmode,"C\TURBOC3\BGI");
 printf("enter first coordinates:");
 scanf("%d%d",&x1,&y1);
 printf("enter last coordinates:");
 scanf("%d%d",&x2,&y2);
 dx=(x2-x1);
 dy=(y2-y1);
 if(abs(dx)>=abs(dy))
   steps=abs(dx);
 else
   steps=abs(dy);
 xinc=dx/steps;
 yinc=dy/steps;

 x=x1;
 y=y1;
 putpixel(x,y,LIGHTBLUE);
 for(i=0;i<steps;i++)
 {
   x=x+xinc;
   y=y+yinc;
   putpixel(x,y,LIGHTBLUE);
 }
 getch();
 closegraph();

}

