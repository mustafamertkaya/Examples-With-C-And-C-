#include<stdio.h>


int main(){
	
	int x;
	int y;
	int max;
	
	printf("iki adet tam sayi giriniz\n");
	scanf("%d%d/n",&x,&y);
	
	if(x>y){
		
		max=x;
	}
	
	if(y>x){
		max=y;
	}
	
	printf("%d\n", max);
	
	
	
	return 0;
	
}
