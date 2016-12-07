#include <stdio.h>
int main()
{
	int i, num;
	num = 2;
	for(i=0; i<5; i++)
	{
	printf("num's value is : %d\n",num);
	num++;
		{
		auto int num=1;
		printf("inner num's value is :%d\n",num);
		num++;
		}
	}
	return 0;
}
