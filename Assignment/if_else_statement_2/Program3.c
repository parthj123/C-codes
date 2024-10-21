

//Check whether the input year taken from user is leap year or not
#include<stdio.h>
void main(){
		
	int year;
	printf("Enter year to be checked:");
	scanf("%d",&year);

	if(year%4==0){
	
		printf("%d is an leap year\n",year);
	}else{
	
	
		printf("%d is an not an  leap year\n",year);
		
	}
}
