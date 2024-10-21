


//Take input from between 1 to 7 and print it corresponding day
#include<stdio.h>

void main(){

	int num;
	

	printf("Enter the value:");
	scanf("%d",&num);

	

	switch(num){
	
		case 1:
		      printf("Sunday\n");
		      break;

		case 2:
		      printf("Monday\n");
		      break;
		case 3:
		      printf("Tuesday\n");
		      break;
		case 4:
		      printf("Wednesday\n");
		      break;
		case 5:
		      printf("Thursday\n");
		      break;
		case 6:
		      printf("Froday\n");
		      break;
		case 7:
		      printf("Saturday\n"); 
		      break;

		default:
		      printf("Invalid input\n");

	}           

}
