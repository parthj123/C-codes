

//Write the code to print the following pattern

  //3  2  1
  //3  2  1
  //3  2  1
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
	for(int i=0;i<rows;i++){
	        int num=rows;
		for(int j=0;j<rows;j++){
		
			printf("%d ",num);
			num--;
		
		}
		printf("\n");
	}

}
