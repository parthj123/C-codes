


//Write a program to demonstrate real time example of the if else ladder


#include<stdio.h>


void main(){

	int ammount;


	printf("Enter total ammount in pocket:");
	scanf("%d",&ammount);

	if(ammount>300){
	
		printf("Starbucks\n");
	}else if(ammount>=200&&ammount<300){
	
		printf("Chai Sutta bar\n");
	}else if(ammount<200&&ammount >=100){
	
		printf("Yewale\n");
	}else{
	
		printf("Only water \n");
	}
}
