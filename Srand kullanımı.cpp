#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	unsigned int seed;
	
	cout<<"****Srand Foksiyon Kullanýmý****"<<endl<<endl;
	
	cout<<"Lütfen Çekirdek Deðer Giriniz: ";
	cin>>seed;
	srand(seed);
	
	for(int i=1;i<=20;i++){
		
		cout<<(1+rand()%6)<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
