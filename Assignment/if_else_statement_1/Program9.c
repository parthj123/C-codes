


//Print the grade of student using their marks
#include<stdio.h>

void main(){

	int marks;

	printf("Enter marks :");
	scanf("%d",&marks);

	

	if(marks>=90){
	
		printf("A Grade\n");
	}else if(marks>=80&&marks<90){
	
		
		printf("B Grade\n");
	}else if(marks>=70&&marks<80){
	
		printf("C grade\n");	
	}else{
	
		printf("Fail\n");		
		}

}
