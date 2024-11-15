

//Take number as the input from user and print where number is composite or not


#include<stdio.h>

void main(){
	
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	int count=0;

	for(int i=1;i<num;i++){
	
		if(num%i==0){
		
			count++;
		}
	
	}
	if(count==1){
	
		printf("Prime Number");
	}else{
	
		
		printf("Composite  Number");
	}
		printf("\n");


}
