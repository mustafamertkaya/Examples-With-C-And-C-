#include<iostream>
#include<iomanip>

using namespace std;

void Swap(int,int);

int main(){
	
	
	int a=2,b=5;
	
	cout<<"SwAP Fonksiyonundan Önce"<<endl;
	cout<<"a= "<<a<<"             b= "<<b<<endl<<endl;
	Swap(a,b);
	
	cout<<"Swap Fonksiyonundan sonra"<<endl;
	cout<<"a= "<<a<<"             b="<<b<<endl;
	return 0;
}

void Swap(int a,int b){
	int gecicidegisken=a;
	a=b;
	b=gecicidegisken;
	
}
