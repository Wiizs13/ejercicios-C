#include<stdio.h>
int main(){
	int i,j=10;
 
/*Impresion Patron a*/
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
		printf("*");
	    }
	printf("\n");
	}
	printf("\n");

/*Impresion Patron b*/
   for(i=1;i<=10;i++){
		for(j=10;j>=i;j--){
		printf("*");
	    }
   	printf("\n");
	}
	printf("\n");
	
/*Impresion Patron c*/
  for(i = 1; i <= 10; i++)
{  
  for(j = 1; j < i; j++) printf(" "); 
     for(j = 10; j >= i; j--) printf("*");
  printf("\n");
} 	  
 	printf("\n");
 		
/*Impresion Patron d*/
 	 for(i = 10; i > 0; i--)
{  
 		printf(" "); 
     for(j = 0; j <= 10 - i; j++) printf("*");
  printf("\n");
}
 	
 	
	return 0;
}
 
