



// Print the even number between ranges where range should taken from use
//

 #include<stdio.h>
 void main(){
 
 	int begin;
	int end;

	printf("Enter start:");
	scanf("%d",&begin);	
	printf("Enter end:");
	scanf("%d",&end);

	for(int i=begin;i<end;i++){
	
		if(i%2==0){
		
			printf("%d\n",i);
		
		}
	
	}	
 
 
 }
