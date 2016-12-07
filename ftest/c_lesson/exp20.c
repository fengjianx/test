#include <stdio.h>
int main()
{
	float h,s;
	h=s=100;
	int i;
	for(i=1;i<=10;i++)
	{
		s=s+2*h;
		h=h/2;
	}
	printf("the tenth time when the ball dropped, it goes for: %f in total and the spring distance last time is : %f\n",s,h);
	return 0;
}
