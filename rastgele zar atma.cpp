#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	
	unsigned int zar1 = 0;
	unsigned int zar2 = 0;
	unsigned int zar3 = 0;
	unsigned int zar4 = 0;
	unsigned int zar5 = 0;
	unsigned int zar6 = 0;
	
	unsigned int atis;
	int sonuc;
	
	
	for(atis=1;atis<=6000000;++atis){
		
		sonuc = 1 + rand()% 6;
		
		
		switch(sonuc){
			
			
			case 1:
				++zar1;
				break;
				
			case 2:
				++zar2;
				break;
				
			case 3:
				++zar3;
				break;
				
			case 4:
				++zar4;
				break;
				
			case 5:
				++zar5;
				break;
				
			case 6:
				++zar6;
				break;
		}
	}
	
	
	printf("%s%13s\n","zar","sonuc");
	printf("1%16u\n",zar1);
	printf("1%16u\n",zar2);
	printf("1%16u\n",zar3);
	printf("1%16u\n",zar4);
	printf("1%16u\n",zar5);
	printf("1%16u\n",zar6);
	
	
	
	
	
	
	
	
	
	
	
	
}
