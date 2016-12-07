#include <stdio.h>
int main()
{
	char str1[12];
	char str2[20];
	printf("please input username:");
	scanf("%s", &str1);
	
	printf("please input your website:");
	scanf("%s", &str2);
	
	printf("username: %s\n",str1);
	printf("website: %s\n",str2);
	return (0);
	
}
