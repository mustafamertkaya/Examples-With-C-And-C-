#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	
	
	setlocale(LC_ALL,"Turkish");
	
	
	cout<<"****Rastgele Sayý Üretme****"<<endl<<endl;
	
	cout<<"Üretilecek Maksimum Tamsayý: "<<RAND_MAX<<endl;
	
	for(int i;i<=20;i++){
		
		cout<<(1+rand()%20)<<endl;
		
	}
	
	
	
  return 0;	
} 


