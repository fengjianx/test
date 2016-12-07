#include<stdio.h>
#include<stdlib.h>

int main()
{
	int len;
	char str[20];
	printf("please input the string: \n");
	scanf("%s",str);
	len=length(str);
	printf("the char number in this string is: %d\n",len);

}


int length(char *s)
{
	int i = 0;
	while(*s!='\0')
	{
		i++;
		s++;

	}
	return i;
}
