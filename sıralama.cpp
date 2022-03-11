#include<stdio.h>


int main(){
	
	int x,y,z,toplam,ortalama,carpim;
	int enbuyuk;
	int enkucuk;
	printf("uc tane sayi girin: \n");
	scanf("%d %d %d", &x, &y, &z);

	if(x>z&&x>y){
		enbuyuk=x;
	}

	if(y>x&&y>z){
		enbuyuk=y;
	}

	if(z>x&&z>y){
		enbuyuk=z;
	}

		if(x<z&&x<y){
		enkucuk=x;
	}

	if(y<x&&y<z){
		enkucuk=y;
	}

	if(z<x&&z<y){
		enkucuk=z;
	}

	ortalama=(x+y+z)/3;

    toplam=x+y+z;
	
	carpim=x*y*z;
	
		
	printf("Enbuyuk: %d\n",enbuyuk);
	printf("Enkucuk: %d\n ",enkucuk);
	printf("Ortalama: %d\n",ortalama);
	printf("toplam: %d\n", toplam);
	printf("carpim: %d\n", carpim);
	
	
	
	return 0;
}
