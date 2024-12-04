


//Write the program to check whether given number is prime or not

 #include<stdio.h>
  void main(){
  
  	int num;
  	printf("Enter the Number: ");
	scanf("%d",&num);

        int count=1;		
	int i=1;
	while(i<num/2){
	
		if(num%i==0){
		
			count++;
		
		}

		i++;
	
	}
 	if(count==1){
	
		printf("%d is prime number\n",num);
	}else{
	
		printf("%d is composite number\n",num);
	
	}
  }
