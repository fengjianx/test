#include<stdio.h>
#include<stdlib.h>

int main(){
	char i,j,k;
	for(i='x';i<='z';i++){
		for(j='x';j<='z';j++){
			if(i!=j){
				for(k='x';k<='z';k++){
					if(i!='x'&&k!='x'&&k!='z'){
						printf("the sequence is: a vs %c\tb vs %c\tc vs %c\n",i,j,k);
					}
				}
			}
		}
	}
}
