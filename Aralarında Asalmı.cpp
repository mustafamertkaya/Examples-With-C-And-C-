#include<iostream>

using namespace std;

int main(){
	
	
	int sayi1,sayi2;
	int kucuk,buyuk;
	int sonuc; 
	
	setlocale(LC_ALL,"Turkish");
	
	cout<<"****Say�lar Aralar�nda Asal m�?****"<<endl<<endl;
	
	cout<<"L�tfen Birinci Say�y� Giriniz: ";
	cin>>sayi1;
	
	cout<<"L�tfen �kinci Say�y� Giriniz: ";
	cin>>sayi2;
	
	if(sayi1<1 || sayi2<1){
		cout<<"L�tfen Pozitif Say� Giriniz.";
		return 0;
	}
	
	else if(sayi1 == 1 || sayi2 == 1 ){
		cout<<sayi1<<" ile "<<sayi2<<" aralar�nda asal de�ildir.";
	return 0;
	}
	
	
	if(sayi1<sayi2){
		kucuk=sayi1;
		buyuk=sayi2;
	}
	else{
		kucuk=sayi2;
		buyuk=sayi1;
	}
	
	for(int i=2;i<=kucuk;i++){
	     	
		if((buyuk % i ==0) && (kucuk % i ==0) ){
	     	sonuc=1;
	     	break;
		}
	
	}
	
	if(sonuc == 1){
		cout<<sayi1<<" ile "<<sayi2<<" aralar�nda asal de�ildir.";
	}
	
	else{
		cout<<sayi1<<" ile "<<sayi2<<" aralar�nda asald�r.";
	}
	
	
	
	
	
	
}
