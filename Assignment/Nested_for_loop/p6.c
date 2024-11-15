

//Write the code to print the following pattern

  //3  6  9
  //12 15 18
  //21 24  28
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
        int num=1;
	for(int i=0;i<rows;i++){
	        
		for(int j=0;j<rows;j++){
		
			printf("%d ",num*3);
			num++;
		
		}
		
		printf("\n");
	}

}
