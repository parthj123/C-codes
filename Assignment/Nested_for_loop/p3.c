

//Write the code to print the following pattern

  //c  c  c
  //B  B  B
  //A  A  A
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
        int num=rows;
	for(int i=0;i<rows;i++){
	        
		for(int j=0;j<rows;j++){
		
			printf("%c ",num+64);
			
		
		}
		num--;
		printf("\n");
	}

}
