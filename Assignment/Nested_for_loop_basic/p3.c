

  //Print the following pattern
  
  //1  2  3  4
  //5  6  7  8
  //9  10 11 12
  //13 14 15 16
  

   #include<stdio.h>

   void main(){
   
   	int rows;

	printf("Enter number of rows:");

	scanf("%d",&rows);
	int num=1;
	for(int i=0;i<rows;i++){
	
		for(int j=0;j<rows;j++){
		
			printf("%d ",num);
			num++;
		
		}
		printf("\n");
	
	}
	
   
   }

