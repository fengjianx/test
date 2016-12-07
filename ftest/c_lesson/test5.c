#include<stdio.h>
struct student
{
int age;
float score;
char sex;
};
int main()
{
struct student a={20,79,'f'};
printf("he is %d years old, he got %.2f scores and oh no! he is %c\n",a.age,a.score,a.sex);
return 0;
}
