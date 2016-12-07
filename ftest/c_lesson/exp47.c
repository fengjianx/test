#include <stdio.h>
#define exchange(a,b) {int t;t=a;a=b;b=t;}

int main()
{
int x;
int y;
printf ("please input two numbers:\n");
scanf ("%d %d",&x,&y);
printf ("before exchanging x= %d y=%d\n",x,y);
exchange(x,y);
printf ("after exchanging x= %d y=%d\n",x,y);
return 0;
}
