#include<stdio.h>
#include<conio.h>

int main(){
	
	int n[10];
	size_t i;
	
	for(i=0;i<10;++i){
		
		n[i]=0;
	}
	
	printf("%s%13s\n", "eleman","deger");

    for(i=0;i<10;++i){
    	printf("%7u%13d\n",i,n[i]);
	}	
	getch();
    }
