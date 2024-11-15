

  //Print the following pattern
  
  //1  2  3  4
  //1  2  3  4
  //1  2  3  4
  //1  2  3  4
  

   #include<stdio.h>

   void main(){
   
   	int rows;

	printf("Enter number of rows:");

	scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		int num=1;

		for(int j=0;j<rows;j++){
		
			printf("%d ",num);
			num++;
		
		}
		printf("\n");
	
	}
	
   
   }

