#include <stdio.h>

void hello()
{
	char s;
	scanf ("'%s'",&s);
	
}

void hello_repeat(a)
{
	int count;
	for(count=0; count<a; count++)
		hello();

}

int main()
{
	printf("please input the string");
	hello_repeat(6);
	return 0;
}
