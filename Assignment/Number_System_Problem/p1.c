


//Write the factors of the given numbers

  #include<stdio.h>
  void main(){
  
  	int num;
  	printf("Enter the Number: ");
	scanf("%d",&num);

		
	int i=1;
	while(i<=num/2){
	
		if(num%i==0){
		
			printf("%d is the factor of %d\n",i,num);

		}

		i++;
	
	}
  
  }
