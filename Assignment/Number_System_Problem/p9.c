


//Check whether given number is Strong number or not
//Perfect number is the number whose sum of factorail of digits of number is equal to the number itself

 #include<stdio.h>
  void main(){
  
        int num;	
  	printf("Enter the Number: ");
	scanf("%d",&num);
	
	int original=num;
       
	int i=1;
	int check=0;
	while(num>0){

		int rem=num%10;
		int fact=1;
		for(int i=1;i<=rem;i++){
		
			fact=fact*i;
		}
		check=check+fact;
		num=num/10;
	}
 	
	if(check==original){
	
		printf("%d is strong number.\n",original);
	}else{
	
		printf("%d is not the strong number\n",original);
	
	}
	
	
  }
