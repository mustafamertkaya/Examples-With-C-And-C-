#include<iostream>

using namespace std;

int main(){
	
	int i;
	int sayi;
	int sayac=0;
	
	
	setlocale(LC_ALL,"Turkish");
	
	cout<<"****Asal Say� Kontrol� ve Asal �arpanlar�"<<endl<<endl;    //Pro�ram Ba�l���..
	
	cout<<"L�tfen Bir Say� Giriniz: ";
	cin>>sayi;
	
	for(i=2;i<sayi;i++){
		
		if(sayi%i==0){
			sayac++;
		}
    }   
	if(sayac==0){
		cout<<"Girilen Say� Asal Say�d�r."<<endl<<"Asal �arpanlar�: "<<sayi<<" "<<"1";
		
	}	
	else{
		cout<<"Girilen Say� Asal De�ildir.";
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
