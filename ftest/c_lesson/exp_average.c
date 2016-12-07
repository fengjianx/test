#include<stdio.h>

int getAverage(int arr[], int size){
	int i;
	double avg;
	double sum=0;

	for(i=0;i<10;++i){
		sum=sum+arr[i];
	}
	avg=sum/size;
printf("sum=%f\n",sum);
printf("avg=%f\n",avg);
	return avg;
}

int main(){
	int balance[5]={85,52,45,41,22};
	double average;
	average=getAverage(balance,5);
	
	printf("the average value of the array is: %f\n",average);
	return 0;

	
}



