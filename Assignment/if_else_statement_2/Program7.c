


//Take input of selling price and cost price from user and tell about total profit or loss


#include<stdio.h>

void main(){

		
	int cp;
	int sp;

	printf("Enter cost price:");
	scanf("%d",&cp); 

	printf("Enter Selling  price:");
	scanf("%d",&sp);

	if(cp >sp){
	
		printf("Total loss =%d\n",cp-sp);
	}else{
	
	
		printf("Total Profit =%d\n",sp-cp);
	}
}
