#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define BOYUT 7

int main(){

size_t yuz;
unsigned int atis;
unsigned int frekans[BOYUT]={0};

srand(time(NULL));

for(atis=1;atis<=6000000;atis++){
	
	yuz= 1 +rand() % 6;
	++frekans[yuz];
}


printf("%s%17s\n","Yuz","Frekans");


for(yuz=1;yuz<BOYUT;++yuz){
	
	printf("%4d%17d\n",yuz,frekans[yuz]);
	
}


getch();
return 0;
}
