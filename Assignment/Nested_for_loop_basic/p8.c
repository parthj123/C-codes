

  //Print the following pattern
  
  //A  A  A  A
  //B  B  B  B
  //C  C  C  C
  //D  D  D  D 

   #include<stdio.h>

   void main(){
   
   	int rows;

	printf("Enter number of rows:");

	scanf("%d",&rows);
	
	int num=65;
	for(int i=0;i<rows;i++){
		

		for(int j=0;j<rows;j++){
		
			printf("%c ",num);
			
		
		
		}
		num++;
		printf("\n");
	
	}
	
   
   }

