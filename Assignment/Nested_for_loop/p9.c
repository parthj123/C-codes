

//Write the code to print the following pattern

 //1  B  3
 //1  B  3
 //1  B  3
 
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
        
	for(int i=0;i<rows;i++){
	        
		for(int j=0;j<rows;j++){
		
			if(j%2==0){
			
				printf("%d ",j+1);
			}else{
			
			
				printf("%c ",j+65);
			}
		
		}
		
		printf("\n");
	}

}
