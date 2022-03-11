#include <stdio.h> 
#include<conio.h>


int main(){
int a[10]; int i;


     for (i=0; i<=9; i++) { printf("%d. Sayiyi gir",i);
        scanf("%d", &a[i]);
     }
    printf("\n-----------------------\n");

     for (i=9; i>=0; i--){
	 
           printf("%d . sirada girilen sayi = %d\n", 9-i, a[i]);
     }
     getch();
	 }

