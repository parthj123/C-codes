

  //Print the following pattern
  
  //a1  b1  c1  d1 
  //a1  b1  c1  d1 
  //a1  b1  c1  d1 
  //a1  b1  c1  d1 

   #include<stdio.h>

   void main(){
   
   	int rows;

	printf("Enter number of rows:");

	scanf("%d",&rows);
	
	
	for(int i=0;i<rows;i++){
		int num=97;

		for(int j=0;j<rows;j++){
		
			printf("%c1 ",num+j);
			
			
		
		
		}
		num++;
		printf("\n");
	
	}
	
   
   }

