#include<stdio.h>
main()
{
char c;
int letters=0;
int space=0;
int digit=0;
int others=0;
printf("please input some characters\n");
while((c=getchar())!='\n')
	{
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	letters++;
	else if(c==' ')
	space++;
	else if(c>='0'&& c<='9')
	digit++;
	else
	others++;
	}
printf("all in all: char=%d space=%d digit=%d others=%d\n",letters,space,digit,others);
}
