



//Take the numnber as input from user if the number is even the print its table from  1 to 10 and number is odd print
//its table from 10 to 1 


 #include<stdio.h>
 void main(){
 
 	

	int num;;

	printf("Enter Numbers:");
	scanf("%d",&num);

	if(num%2==0){
	
		for(int i=1;i<=10;i++){


			printf("%d\n",i*num);
		
		}
	
	}else{
	
	
		for(int i=10;i>=1;i--){


			printf("%d\n",i*num);
		
		}
	
	}
 
 }
