#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi1,sayi2,sayi3,ortalama;
	printf("Uc sayi girin:");
	scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
	ortalama=(sayi1+sayi2+sayi3)/3;
	printf("Ortalama:%d\n",ortalama);
	if(sayi1>ortalama){
		printf("%d buyuktur ortalamadan\n",sayi1);
	}
	else{printf("%d kucuktur ortalamadan\n",sayi1);
	}
		if(sayi2>ortalama){
		printf("%d buyuktur ortalamadan\n",sayi2);
	}
	else{printf("%d kucuktur ortalamadan\n",sayi2);
	}
		if(sayi3>ortalama){
		printf("%d buyuktur ortalamadan\n",sayi3);
	}
	else{printf("%d kucuktur ortalamadan\n",sayi3);
	}
	return 0;
}



