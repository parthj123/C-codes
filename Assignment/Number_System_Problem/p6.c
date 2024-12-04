


//Write the program to check the print the reverse of the given number

 #include<stdio.h>
  void main(){
  
  	int num;
  	printf("Enter the Number: ");
	scanf("%d",&num);

        		
	
	while(num>0){

	int rem=num%10;
	printf("%d",rem);
		
	num=num/10;
	
	}
 	
	printf("\n");
	
	
  }
