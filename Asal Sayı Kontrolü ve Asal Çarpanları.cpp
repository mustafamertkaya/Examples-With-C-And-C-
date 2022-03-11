#include<iostream>

using namespace std;

int main(){
	
	int i;
	int sayi;
	int sayac=0;
	
	
	setlocale(LC_ALL,"Turkish");
	
	cout<<"****Asal Sayý Kontrolü ve Asal Çarpanlarý"<<endl<<endl;    //Proðram Baþlýðý..
	
	cout<<"Lütfen Bir Sayý Giriniz: ";
	cin>>sayi;
	
	for(i=2;i<sayi;i++){
		
		if(sayi%i==0){
			sayac++;
		}
    }   
	if(sayac==0){
		cout<<"Girilen Sayý Asal Sayýdýr."<<endl<<"Asal Çarpanlarý: "<<sayi<<" "<<"1";
		
	}	
	else{
		cout<<"Girilen Sayý Asal Deðildir.";
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
