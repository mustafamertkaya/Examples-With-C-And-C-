#include<stdio.h>


int main(){
	
	
	long int n;
	double fact=1;
	
	
	
	printf("Faktoriyelini almak istediginiz sayiyi giriniz\n");
    scanf("%d",&n);
		
		
		
    while(n>=1){
			
		
		fact =fact*n;	
			n--;	
		}
	    printf("%g", fact);
	
	
    return 0;
	}

	
