#include<iostream>

using namespace std;


int main(){
	
	
	int i;
	int sayi;
	 
	setlocale(LC_ALL,"Turkish");
	 
	cout<<"L�tfen Say� Giriniz: ";
	cin>>sayi;
	
	for(i=2;i<=sayi;i++){
		if(sayi%i==0){
			cout<<i<<" ";
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
