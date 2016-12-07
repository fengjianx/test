#include<stdio.h>

int main(){
	int i=5;
	int fact();
	printf("%d!=%d\n",i,fact());
}

int fact(int j)
{
	int sum;
	if (j==0){
		sum=1;
	}else{
		sum=j*fact(j-1);
	}
	return sum;
}
