#include<stdio.h>
#include<conio.h>


int square(int y);


int main(){
	
int x;

	for(x=1;x<=10;x++){
		
		printf("%d ",square(x));
	}
	puts("");
	
	}

int square(int y)
{

   return y*y;
}
