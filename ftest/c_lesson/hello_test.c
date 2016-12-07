#include<stdio.h>
main()
{
int i,j,k,n;
printf("water flower numer is:");
	for (n=100;n<1000;n++)
	{
	i=n/100;
	j=n/10%10;
	k=n%10;
	if (i*100+j*10+k==i*i+j*j+k*k)
		{
		printf("%d",n);
		}
	}
printf("\n");
}

