#include <iostream>
#include <iomanip> 

using namespace std;

void DiziyiDegistir(int [],int);//Prototip   

int main()
{

const int DIZI_BOYUTU=5; 

int a[DIZI_BOYUTU]={0,1,2,3,4};
cout<<"Fonksiyona Referansla Gonderilmeden Once Dizinin Icerigi:\n";

     
	 for(int i=0;i<DIZI_BOYUTU;i++)
        cout<<setw(3)<<a[i];
        cout<<endl;


DiziyiDegistir(a,DIZI_BOYUTU);               

cout<<"Fonksiyon Icinde Degistirilmis Dizinin Icerigi:\n";


for(int j=0;j<DIZI_BOYUTU;j++)
    cout<<setw(3)<<a[j];
    cout<<endl;
    return 0;
}

//Fonksiyon Tanýmý
void DiziyiDegistir(int b[],int dizininBoyutu)                              
{                                                                         
//Her Bir Dizi Elemanýný 2 ile Çarp                                    
for(int k=0;k<dizininBoyutu;k++)                                
b[k]*= 2;                                                        
} 



