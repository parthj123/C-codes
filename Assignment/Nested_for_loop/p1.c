

//Write the code to print the following pattern

  //A  B  C
  //D  E  F
  //H  I  J
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	char ch='A';
	for(int i=0;i<rows;i++){
	
		for(int j=0;j<rows;j++){
		
			printf("%c ",ch);
			ch++;
		
		}
		printf("\n");
	}

}
