

//Write the code to check whether student passed with first class with distinction ,first class ,second class
//
#include<stdio.h>
void main(){
		
	int marks;

	printf("Enter marks:");
	scanf("%d",&marks);

	if(marks>=85){
	
		printf("First class with distinction\n");
	}else if(marks>=75&&marks<85){
	
	
		printf("first class\n");
	}else if(marks>=65&&marks<75){
	
	
		printf("second class\n");
	 }else{
	 
	 	printf("Third class\n");
	 }

}
