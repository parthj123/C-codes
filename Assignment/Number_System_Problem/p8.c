


//Check whether given number is perfect number or not
//Perfect number is the number whose divisors sum is equal to number itself excluding itself

 #include<stdio.h>
  void main(){
  
        int num;	
  	printf("Enter the Number: ");
	scanf("%d",&num);
	
	int perfect=0;
        		
	int i=1;
	while(i<=num/2){

		if(num%i==0){
			
			perfect=perfect+i;
		}
		i++;	
	}
 	
	if(perfect==num){
	
		printf("%d is perfect number.\n",num);
	}else{
	
		printf("%d is not the perfect number\n",num);
	
	}
	
	
  }
