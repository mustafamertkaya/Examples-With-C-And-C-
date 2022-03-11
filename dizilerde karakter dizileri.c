#include<stdio.h>
#include<conio.h>
#define BOYUT 20

int main(){
	
	char string1[BOYUT];
	char string2[]="Mustafa Kaya";
	size_t i;
	
	printf("********DiZiLERiN KARAKTER DiZiNLERi GiBi GOSTERiLMESi*******\n\n\n\n");
	
	printf("Karakter dizini giriniz(En fazla 19 karakter): ");
	scanf("%19s",&string1);
	
	printf("string1: %s\nstring2: %s\n" ,string1,string2);
	printf("string1 karakterler arasi boslukla yazilmasi\n");

	for(i=0;i<BOYUT && string1[i] != '\0';++i){
		printf("%c ",string1[i]);
	}
	
	puts("");
	
		
	getch();
	return 0;
}
