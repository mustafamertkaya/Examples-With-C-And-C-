#include<stdio.h>
#include<conio.h>

int main() {

	int a;
	int *aPtr;

	a = 7;
	aPtr = &a;



	printf("the address of a is %p""\nThe value of aPtr is %p", &a, aPtr);

	printf("\n\nThe value of a is %d""\n The value of *aPtr is %d" , a, *aPtr);

	printf("\n\nshowing that * and & are comlemensts of each other\n&*aPtr = %p""\n*&aPtr = %p\n", &*aPtr, *&aPtr);


getch();
return 0;
}

