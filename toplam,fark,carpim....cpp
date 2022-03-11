#include<stdio.h>
#include<conio.h>


int main(){
	
	int x,y,toplam,carpim,fark,kalan;
	float bolum;
	
	printf("iki adet tam sayi giriniz\n");
	scanf("%d%d", &x, &y);

	toplam=x+y;
	printf("toplam %d\n", toplam);
	
	carpim=x*y;
	printf("carpim %d\n", carpim);
	
	fark=x-y;
	printf("fark %d\n", fark);
	
	bolum=(float)x/y;
	printf("bolum %.2f\n", bolum);
	
	kalan=x%y;
	printf("kalan %d\n", kalan);
	
	
	
	getch();
	return 0;
}
