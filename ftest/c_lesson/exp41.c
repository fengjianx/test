#include <stdio.h>
int main()
{
	int i;
	void fun();
	for(i=0; i<5; i++)
	fun();
	return 0;
}

void fun()
{
	int i=0;
	static int static_i=0;
	printf("the value of int is = %d\n",i);
	printf("the value of static_i is =%d\n",static_i);
	i++;
	static_i++;
}
