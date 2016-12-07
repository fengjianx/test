#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main(){
	double y;	
	int x,m,n,yy;
	clrscr ();
	puts("=====This program shows the curve of cos(x) and a line.=====");
	puts("     *****f(x)=cos(x)    +++++g(x)=45*(y-1)+31");
	
	for(yy=0;yy<=20;yy++){
		y=0.1*yy;
		m=acos (1-y)*10;
		n=45*(y-1)+31;
		for(x=0;x<=62;x++)
			if(x==m&&x==n) printf("+");
			else if(x==n) printf("+");
			else if(x=m||x==62-m) printf("*");
		printf("\n");	
	}
	puts("press any key to quit...");
	getch ();
}
