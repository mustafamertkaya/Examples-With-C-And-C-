#include<iostream>

using namespace std;

int faktoriyel(int sayi){
		
		if(sayi<=1)
			return 1;
		
		else
			return sayi*faktoriyel(sayi-1);
	}
		
int main(){
	
	for(int i=1;i<=10;i++){
		cout<<i<<" != "<<faktoriyel(i)<<endl;
	}	
	
	
	
	return 0;
}
