

//take input for the side of triangle from the user calculate whether input taken from user are 
//pythagores triplet or not
//
#include<stdio.h>
void main(){
		
	int side1;
	int side2;
	int side3;

	printf("Enter first side:");
	scanf("%d",&side1);
	printf("Enter second side:");
	scanf("%d",&side2);
	printf("Enter third  side:");
	scanf("%d",&side3);

	if(side1*side1+side2*side2==side3*side3){
	
		printf("Pythagores triplet\n");
	}else{
	
	
		printf("Not a pythagores triplet\n");
	}
}
