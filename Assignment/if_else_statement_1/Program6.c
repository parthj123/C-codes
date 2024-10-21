


//Check whether given number is divisibl bt 3 and 7
#include<stdio.h>

void main(){

	int num;

	printf("Enter numbered to checqued:");
	scanf("%d",&num);

	if(num%3==0&&num%7==0){
	
		printf("Given number is divisible by 3 and 7\n");
	}else{
	
		printf("Given number is not divisible by 3 and 7\n");
	}

}
