

//Write a programm to calculate numbers of divisor between 2 to 10 for given number of input


#include<stdio.h>

void main(){

	int num;
	printf("Enter Number:");
	scanf("%d",&num);

	int count=0;
	for(int i=2;i<=10;i++){
	
		if(num%i==0){
		
			count++;
		}
	
	}

	printf("Total numbrs of divisor is %d\n",count);

}
