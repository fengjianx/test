#include<stdio.h>

int main(){
	int i=5;
	void palin(int n);
	printf("please input five char\40:\40");
	palin(i);
	printf("\n");
}

void palin(n)
int n;
{
	char next;
	if(n<=1){
		next=getchar();
		printf("the opposite char is\40:\40");
		putchar(next);
	}else{
		next=getchar();
		palin(n-1);
		putchar(next);
		
	}
}
