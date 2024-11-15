



//Take the range as input from user and print product of even numbers between range 


 #include<stdio.h>
 void main(){
 
 	int start;
	int end;

	int product=1;

	printf("Enter Start :");
	scanf("%d",&start);	
	printf("Enter end:");
	scanf("%d",&end);	
	

	for(int i=start;i<=end;i++){
	
	
		
		if(i%2==0){
		
			product=product*i;
		
		}
		
	
	
	}	
 
	printf("Total Product:%d\n",product);
 
 }
