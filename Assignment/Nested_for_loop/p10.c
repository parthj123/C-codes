

//Write the code to print the following pattern

 //A  B  C
 //a  b  c
 //A  B  C
 
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
        
	for(int i=0;i<rows;i++){
	        
		for(int j=0;j<rows;j++){
		
			if(i%2==0){
			
				printf("%c ",j+65);
			}else{
			
			
				printf("%c ",j+97);
			}
		
		}
		
		printf("\n");
	}

}
