

//Sstudent has passed the 12th exam.suggest him field based upon his marks
//
#include<stdio.h>
void main(){
		
	int marks;

	printf("Enter marks:");
	scanf("%d",&marks);

	if(marks>=85){
	
		printf("Medical field\n");
	}else if(marks>=75&&marks<85){
	
	
		printf("Engineering field\n");
	}else{
	
	
		printf("Pharmacy field\n");
		}
}
