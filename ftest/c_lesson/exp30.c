#include<stdio.h>

int main(){
	long ge, shi, qian, wan,x ;
	printf("please input 5 digits:");
	scanf("%ld",&x);
	wan=x/10000;
	qian=x%10000/1000;
	shi=x%100/10;
	ge=x%10;
	if(ge==wan&&qian==shi){
		printf("this is a good number\n");
	}else{
		printf("this is not a good number\n");
	}
	return 0;	
}
