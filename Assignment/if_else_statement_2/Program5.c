

//Write a program to calculate electricity bills based on following rules
//for the first 100 units cost is 5rs per unit
//for next 200 unit cost is 7rs per unit
//for any unit aboce 300 cost is 10re oer unit
//
#include<stdio.h>
void main(){
		
	int unit;
	printf("Enter electricity bill unit:");
	scanf("%d",&unit);

	if(unit<=100){
	
		printf("Cost of the bill is %d\n",unit*5);

	}else if(unit>100&&unit<=300){
	
		printf("Cost of the bill is %d\n",unit*7);
	}else{
	
		printf("Cost of the bill is %d\n",unit*10);
	}
}
