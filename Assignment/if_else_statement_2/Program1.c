

//Check whether the input taken from user is between 1 and 1000
#include<stdio.h>
void main(){
		
	int num;
	printf("Enter number to be checked:");
	scanf("%d",&num);

	if(num<1000&&num>1){
	
		printf("Number is in the between 1 and 1000\n");
	}else{
	
	
		printf("Number is not  in the between 1 and 1000\n");
	}
}
