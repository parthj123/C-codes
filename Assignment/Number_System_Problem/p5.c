


//Write the program to check the number of digits in the given number

 #include<stdio.h>
  void main(){
  
  	int num;
  	printf("Enter the Number: ");
	scanf("%d",&num);

        int count=0;		
	
	while(num>0){
	
		num=num/10;
		count++;
	
	}
 	
	
	printf("Number of digits are %d\n",count);
	
  }
