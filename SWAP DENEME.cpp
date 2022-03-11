#include <iostream> 

using namespace std;

void Swap(int,int);//Fonksiyon Prototipi

int main()
{
int a=2,b=5;

cout<<"Swap Fonksiyonu Cagrilmadan Once:\n";
cout<<"a="<<a<<"   b="<<b<<endl;

Swap(a,b);



return 0;
}

//Fonksiyon Tanýmý
void Swap(int a, int b){
	
int geciciDegisken=a ; 
a=b;
b=geciciDegisken;

cout<<"Swap Fonksiyonu Cagrildiktan Sonra:\n";
cout<<"a="<<a<<"   b="<<b<<endl;

}
