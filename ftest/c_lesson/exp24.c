#include<stdio.h>
int main(){
	int i,t;
	float sum=0;
	float a=2;
	float b=1;
	for(i=1;i<=20;i++){
		sum=sum+a/b;
		t=a;
		a=a+b;
		b=a;
	}
	printf("%9.6f\n",sum);
}
