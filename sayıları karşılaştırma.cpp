#include<stdio.h>

int main(){
	
	int number1,number2;
	printf("iki sayi girin:");
	scanf("%d %d", &number1, &number2);
	
	if(number2 > number1){
	printf("%d is larger  %d\n", number2 , number1);
	}
	
	if(number1 > number2){
    printf("%d is larger %d\n", number1, number2);
	}
	
	
	if(number1 == number2){
	printf("%d these number are aqual %d\n", number1, number2);
	}
	
	return 0;
	}
