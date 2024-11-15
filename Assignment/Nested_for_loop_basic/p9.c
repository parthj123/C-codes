

  //Print the following pattern
  
  //D  C  B  A
  //D  C  B  A
  //D  C  B  A
  //D  C  B  A

   #include<stdio.h>

   void main(){
   
   	int rows;

	printf("Enter number of rows:");

	scanf("%d",&rows);
	
	int num=65;
	for(int i=0;i<rows;i++){
		int num1=rows;

		for(int j=0;j<rows;j++){
		
			printf("%c ",num1+64);
			num1--;
			
		
		
		}
		num++;
		printf("\n");
	
	}
	
   
   }

