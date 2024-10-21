


//Check given triagle is valid or not


#include<stdio.h>

void main(){
	

	int angle1;
	int angle2;
	int angle3;


	printf("Enter first angle :\n");
	scanf("%d",&angle1);
	printf("Enter second angle :\n");
	scanf("%d",&angle2);
	printf("Enter third angle:\n");
	scanf("%d",&angle3);

	if(angle1+angle2+angle3==180){

		printf("Valid triangle\n");
	}else{
	
		printf("Invalid triangle\n");
	}


	
}
