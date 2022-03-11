#include <stdio.h>


char katar [4] [3] ; 
int  i,j;
int main() { 


    for (i=0; i<3; i++) { 
        
		for (j=0; j<4; j++) {
		katar[i] [j]=i*j; 
		 }     
    }


    for (i=0; i<3; i++) { 
        
		for (j=0; j<4; j++){
		 
        printf("    %d", katar[i] [j] ); 
       } 
	   printf("\n"); 
    } 
    
	}

