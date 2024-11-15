



//Take the range as the input from user and print cube of odd numbers between range 


 #include<stdio.h>
 void main(){
 
 	

	int start;
	int end;

	printf("Enter Start:");
	scanf("%d",&start);
	printf("Enter End:");
	scanf("%d",&end);
	
	
	for(int i=start;i<=end;i++){

		if(i%2==1){
		
			printf("%d\n",i*i*i);
		}
		
	}
	
	
 
 }
