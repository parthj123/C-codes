

  //Print the following pattern
  
  //1  1  1  1
  //2  2  2  2
  //3  3  3  3
  //4  4  4  4
  

   #include<stdio.h>

   void main(){
   
   	int rows;

	printf("Enter number of rows:");

	scanf("%d",&rows);
		
	int num=1;
	for(int i=0;i<rows;i++){
		int num1=num;

		for(int j=0;j<rows;j++){
		
			printf("%d ",num1);
			
		
		}
		num++;
		printf("\n");
	
	}
	
   
   }

