#include <iostream>

using namespace std;


int main()
{
	int toplam=0;
	int sayi;
   
   setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
   
   for(int i=1;i<=5;i++) {
  
   cout<<i<<". Say�y� Girin : ";
   cin>>sayi;
   	toplam=toplam+sayi;
  
   }
   
   cout<<"Girilen 5 say�n�n toplam� : "<<toplam;
}
