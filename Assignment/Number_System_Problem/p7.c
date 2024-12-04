


//Check whether given number is pallindrome number or not

 #include<stdio.h>
  void main(){
  
  	int num;
	int original=0;
	int reverse=0;
  	printf("Enter the Number: ");
	scanf("%d",&num);

        		
	original=num;
	while(num>0){

	int rem=num%10;
	reverse=reverse*10 + rem;
		
	num=num/10;
	
	}
 	
	if(original==reverse){
	
		printf("%d is pallindrom number.\n",original);
	}else{
	
		printf("%d is not the pallindrom number.\n",original);
	
	}
	
	
  }
