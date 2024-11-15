



//Take the range as input from user and print the sum of numbers between them 


 #include<stdio.h>
 void main(){
 
 	int start;
	int end;

	int sum=0;

	printf("Enter Start :");
	scanf("%d",&start);	
	printf("Enter end:");
	scanf("%d",&end);	
	

	for(int i=start;i<=end;i++){
	
	
		
		sum=sum+i;
		
	
	
	}	
 
	printf("Total Sum:%d\n",sum);
 
 }
