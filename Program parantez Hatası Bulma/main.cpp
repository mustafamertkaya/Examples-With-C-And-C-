#include<iostream>
#include<stack>
#include<string>
#include<conio.h> 
#include <cstring>
#include <algorithm>
#include <vector>
#include <fstream>
#include "parantez.h"

using namespace std;


int main(){
	setlocale(LC_ALL, "Turkish");
	
	parantez p;
	string x;
	string satir;
	ifstream okumaDosyasi; //Dosya Okuma Tanýmý
	vector<char>parantez;
	string par= "(){}[]";
	
	
	cout<<"                               *****************************************************"<<endl;
	cout<<"                                 ---> Dosyadaki Kod Hatalarýný Bulma Programý <---"<<endl;
	cout<<"                               *****************************************************"<<endl<<endl<<endl;
	
	
	
	p.parantezBasma(x);
    
    
     if(p.hata_satiri(satir)==0)  
              cout<<"parantez hatasi yok";  
                      else if(p.hata_satiri(satir)>0)   cout<<"Eksik Parantez.";
                    	 else cout<<"Eksik Parantez:";
       cout<<"\n devam icin bir tusa basiniz..."; getch();
       
       

       
		
	okumaDosyasi.close(); //Dosya Kapatma
	return 0;
	
}
