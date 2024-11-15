

  //Print the following pattern
  
  //*  *  *  *
  //*  *  *  *
  //*  *  *  *
  //*  *  *  *
  

   #include<stdio.h>

   void main(){
   
   	int num;
	printf("Enter number of rows:");
	scanf("%d",&num);

	for(int i=0;i<num;i++){
	
		for(int j=0;j<num;j++){
		
			printf("* ");
		
		}
		printf("\n");
	
	}
	
   
   }

