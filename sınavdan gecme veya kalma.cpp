#include<stdio.h>


int main(){
	
	printf("  ****Ogrenci dersten ortalama puani****\n\n");
	
	int not1,not2,not3,proje,ort;
	
	printf("3 adet sinav notunuz ve proje notunuzu giriniz\n");
	scanf("%d%d%d%d",&not1, &not2, &not3, &proje);
	
	ort=(not1+not2+not3+proje)/4;
	
	printf("ort: %d\n",ort);
	
	
	if(ort<50){
		printf("FF aldiniz\n");
		printf("Dersten kaldiniz ):" );
	}
	
	if(ort>50 && ort<60){
		printf("DD aldiniz\n");
		printf("Tebrikler dersten gectiniz :)");
	}
	
	if(ort>60 && ort<70){
		printf("CC aldiniz\n");
		printf("Tebrikler dersten gectiniz :) ");
	}
	
	if(ort>70 && ort<85){
		printf("BB aldiniz\n");
		printf("Tebrikler dersten gectiniz :)");
	}
	
	if(ort>85){
		printf("AA aldiniz\n");
		printf("Tebrikler dersten en iyi dereceyle gectiniz :) ");
	}
	
	
	
	
	
	return 0;
}
