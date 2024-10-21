


//Check whether given number is divisible by 5 or 10
#include<stdio.h>

void main(){

	int num;

	printf("Enter number to be checqued:");
	scanf("%d",&num);

	if(num%5==0||num%10==0){
	
		printf("Num is divisible by 5 or 10\n");
	}else{
	
		printf("Num is not divisible by 5 or 10");
	}

}
