


//Write the factorial of the given numbers

 #include<stdio.h>
  void main(){
  
  	int num;
  	printf("Enter the Number: ");
	scanf("%d",&num);

		
	int fact=1;
	while(num>=1){
	
		fact=fact*num;

		num--;
	
	}
 	printf("Factorail is %d\n",fact); 
  }
