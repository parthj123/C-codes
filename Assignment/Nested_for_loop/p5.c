

//Write the code to print the following pattern

  //1  2   3
  //3  2   1
  //1  2   3
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
        int num=rows;
	for(int i=0;i<rows;i++){
	        
		for(int j=0;j<rows;j++){
		
			if(i%2==0){
			
				printf("%d  ",j+1);
				
			}else{
					
				printf("%d  ",num-j);
				
			
			}
		
		}
		
		printf("\n");
	}

}
