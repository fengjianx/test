#include<stdio.h>

void swap(int *, int *);
int main(void)
{
	int a,b,c;
	int *p1, *p2, *p3;
	printf("input a b c:\n");
	scanf("%d %d %d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	printf("the initial address of a b c is:\n %p\n %p\n %p\n",&a,&b,&c);
	printf("the initial value of p1 p2 p3 is :\n %d\n %d\n %d\n",*p1,*p2,*p3);
	if(a>b)
		swap(p1,p2);
	if(a>c)
		swap(p1,p3);
	if(b>c)
		swap(p2,p3);
	printf("the right sequence is:\n %d %d %d \n",a,b,c);
	printf("the changed address of a b c is:\n %p\n %p\n %p\n",&a,&b,&c);
	printf("the changed address of p1 p2 p3 is:\n %d\n %d\n %d\n",*p1,*p2,*p3);
	
}

void swap(int *s1, int *s2)
{
	int t;	
	t=*s1;
	*s1=*s2;
	*s2=t;

}



