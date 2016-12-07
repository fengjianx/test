#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int len;
	printf("please input the string to be calculated:\n");	
	scanf("%s",&str);

	len=strlen(str);
	printf("The length of |%s| is |%d|\n",str,len);
	return (0);

} 
