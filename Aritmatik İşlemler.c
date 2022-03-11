#include <stdio.h>




int main() {
	
	int x,y,toplam,carpim,fark;
	float bolum;
	
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&x);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&y);
	
	toplam=x+y;
	carpim=x*y;
	fark=x-y;
	bolum= (float) x/y;
	
	
	printf(" Toplam:%d\n carpim:%d\n fark:%d\n ",toplam,carpim,fark);
	printf("Bolum:%.2f\n",bolum);
	
	
	getch();
	return 0;
}
