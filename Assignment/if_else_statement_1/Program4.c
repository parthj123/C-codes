


//Check whether given age is eligible for voting or not
#include<stdio.h>

void main(){

	int age;

	printf("Enter Age to be checqued:");
	scanf("%d",&age);

	if(age>=18){
	
		printf("Eligible for voting\n");
	}else{
	
		printf("Not eligible for the voting\n");
	}

}
