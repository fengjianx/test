#include <stdio.h>
int main()
{
int score;
int grade;
printf("please input your score:\n");
scanf("%d",&score);
grade=(score>=90)?'A':((score>=60)?'B':'C');
printf("%c\n",grade);
if(grade=='A')
{
printf("Wow, you are excellent!");
}
else if(grade=='B')
{
printf("Good, but still can be improved!");
}
else 
{
printf("Failed, you need practice more!");
}

printf("\n");
printf("\n");
return 0;
}
