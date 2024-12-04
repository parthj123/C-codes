


//Check whether given number is duck number or not
//Duck number is number which contain zero but should not start number with zero

 #include<stdio.h>
 #include<stdbool.h>
  void main(){
  
        int num;	
  	printf("Enter the Number: ");
	scanf("%d",&num);
	
	bool flag=false;
        		
	
	while(num>0){

		int rem=num%10;
		if(rem==0){
		
			flag=1;
			break;
		}
		num=num/10;
	}
 	
	if(flag){
	
		printf("%d is duck number.\n",num);
	}else{
	
		printf("%d is not the duck number\n",num);
	
	}
	
	
  }
