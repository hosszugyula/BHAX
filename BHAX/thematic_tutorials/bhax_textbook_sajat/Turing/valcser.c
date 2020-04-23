#include<stdio.h>  
#include<stdlib.h>  
int main()    
{    
int a=30, b=45;      
	printf("Csere elott a szamok: a=%d b=%d",a,b); 

	a=a*b;   //a=1350 (30*45)    
	b=a/b;   //b=30 (1350/45)    
	a=a/b;   //a=45 (1350/30)    
  
	printf("\nCsere utan a szamok: a=%d b=%d",a,b); 
	      
return 0;  
}   