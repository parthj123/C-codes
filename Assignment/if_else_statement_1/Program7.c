


//Check Maximun number between two numbers
#include<stdio.h>

void main(){

	int num1;
	int num2;

	printf("Enter first number :");
	scanf("%d",&num1);

	printf("Enter Second number:");
	scanf("%d",&num2);

	if(num1>num2){
	
		printf("%d is bigger than %d\n",num1,num2);
	}else{
	
		
		printf("%d is bigger than %d\n",num2,num1);
	}

}
