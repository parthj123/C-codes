

//Write a programm to calculate even numbers between 2 to 200


#include<stdio.h>

void main(){



	int count=0;
	for(int i=2;i<=200;i++){
	
		if(i%2==0){
		
			count++;
		}
	
	}

	printf("Total numbrs of even numbers between 2 to 200 are  %d\n",count);

}
