
#include <iostream>//cout ve endl
#include <iomanip> //setw

using namespace std;


void DiziyiDegistir(int [],int);//Prototip   

int main()
{
const int DIZI_BOYUTU=5; 

int a[DIZI_BOYUTU]={0,1,2,3,4};//Diziye ?lk De?er Ata

cout<<"Fonksiyona Referansla Gonderilmeden Once Dizinin Icerigi:\n";
//Orijinal Dizi Elemanlar?n? Ekrana Yazd?r

for(int i=0;i<DIZI_BOYUTU;i++)
   cout<<setw(3)<<a[i];

   cout<<endl;

//Diziyi Fonksiyona Referansla Aktar
DiziyiDegistir(a,DIZI_BOYUTU);               
 
cout<<"Fonksiyon Icinde Degistirilmis Dizinin Icerigi:\n";

//Fonksiyon ??inde De?i?tirilmi? Dizi Elemanlar?n? Ekrana Yazd?r
for(int j=0;j<DIZI_BOYUTU;j++)
cout<<setw(3)<<a[j];
cout<<endl;
return 0;
}

//Fonksiyon Tan?m?
void DiziyiDegistir(int b[],int dizininBoyutu)                              
{                                                                         
//Her Bir Dizi Eleman?n? 2 ile ?arp                                    
for(int k=0;k<dizininBoyutu;k++)                                
b[k]*= 2;                                                        
} 



