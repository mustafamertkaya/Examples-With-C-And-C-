#include<iostream>

using namespace std;


	
int main(){
		
	setlocale(LC_ALL,"Turkish");
	
	int i,j;
	int sayac=0;
	int alt_aralik;
	int ust_aralik;
	
	cout<<"****Aralýktaki Asal Sayýlarý Bulma****"<<endl<<endl;
	
	cout<<"Lütfen Alt Aralýk giriniz: ";
	cin>>alt_aralik;
	
	cout<<"Lütfen Üst Aralýk Giriniz: ";
	cin>>ust_aralik;
	
	for(i=alt_aralik+1;i<ust_aralik;i++){
		
	    for(j=2;j<i;j++){
			
			if(i%j==0){
				sayac++;
				
			}
		
		}	
		if(sayac==0){
			cout<<i<<" ";	
		}
	sayac=0;	
	}

		
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
