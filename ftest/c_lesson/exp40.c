#include <stdio.h>
#define N 10
int main()
{
	int a[N] = {0,1,2,3,4,5,6,7,8,9};
	int i, j;
	printf("the value of the array is:\n");
	for(i=0;i<N;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<N/2;i++)
	{
		j=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=j;	
	}
	printf("the value of the array after changing is:\n");
	for(i=0;i<N;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
