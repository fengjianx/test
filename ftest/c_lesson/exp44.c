#include <stdio.h>
int a, b, c;
void add()
{
	int a=3;
	c=a+b;
}

int main()
{
	a=10;
	b=4;
	add();
	printf ("the value of c should be:%d\n",c);
	return 0;
}
