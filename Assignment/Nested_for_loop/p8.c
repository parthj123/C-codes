

//Write the code to print the following pattern

 //A1  A2   A3
 //A1  A2   A3
 //A1  A2   A3
 
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
        
	for(int i=0;i<rows;i++){
	        
        int num=1;
		for(int j=0;j<rows;j++){
		
			printf("A%d ",num);
			num++;		
		}
		
		printf("\n");
	}

}
