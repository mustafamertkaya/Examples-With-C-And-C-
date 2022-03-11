#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(){
	
	
	unsigned int i;
	unsigned int cekirdek;
	
	
	printf("cekirdek giriniz: ");
	scanf("%u",&cekirdek);
	
	
	for(i=1;i<=10;++i){
		
		
		printf("%10d", 1+(rand()%6));
		
		if(i%5 ==0){
			puts("");
			
		}
	} 	
	getch();
	return 0;
}
