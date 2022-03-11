#include<stdio.h>
#include<conio.h>
int main(){
	
	int num1;
	int num2;
	
	printf("iki tam sayi girin , ve ben sana sonucu soyleyecegim\n");
	printf("iliskilerini aciklayacagim: ");
	
	scanf("%d%d" , &num1 , &num2 );
	
	if (num1==num2 ) {
	printf("%d , esittir %d\n" , num1, num2 );
	}
	
	if (num1 != num2 ) {
	printf("%d , esit degildir %d\n" , num1, num2 );		
	}
	
	if(num1 < num2 ) {
	printf("%d , daha az %d\n" , num1 , num2);
	}
	
	if (num1 > num2){
	printf("%d , daha buyuktur %d\n" , num1 , num2);	
	}
	
	if(num1 <= num2){
	printf("%d , kucuktur veya esittir %d\n" , num1 , num2  );	
	}
	
	if(num1 >= num2){
	printf("%d , buyuktur veya esittir %d\n" , num1 , num2);
	}
	
	getch();
return 0;
}

	
