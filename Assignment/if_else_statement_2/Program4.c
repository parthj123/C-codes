

//Check whether the input character taken from user is vowel or consonent
#include<stdio.h>
void main(){
		
	char sym;
	printf("Enter Character:");
	scanf("%c",&sym);

	if(sym=='A'||sym=='E'||sym=='I'||sym=='O'||sym=='U'||sym=='a'||sym=='e'||sym=='i'||sym=='o'||sym=='u'){
	
		printf("%c is an vowel\n",sym);
	}else{
	
	
		
		printf("%c is an consonent\n",sym);

	}
}
