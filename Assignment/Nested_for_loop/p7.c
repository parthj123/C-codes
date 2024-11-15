

//Write the code to print the following pattern

 //*  #  *
 //*  #  *
 //*  #  *
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
        int num=1;
	for(int i=0;i<rows;i++){
	        
		for(int j=0;j<rows;j++){
		
			if(j%2==0){
			
				printf("* ");
			}else{
			
			
				printf("# ");
			}
		
		}
		
		printf("\n");
	}

}
