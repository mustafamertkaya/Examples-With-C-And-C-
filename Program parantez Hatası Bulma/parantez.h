#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

class parantez
{
public:

    string satir;
	string x;
	ifstream okumaDosyasi; //Dosya Okuma Tanýmý
	vector<char>parantez;
	string par= "(){}[]";


int hata_satiri(string satir){
	int sayi;
     stack<char> S;
	for(int i = 0;i< satir.length();i++) {
 		if(satir[i] == '(' || satir[i] == '[' || satir[i] =='{') {
		   sayi++;
		   S.top();
		   S.push(satir[i]); 
		   }               
        else if(satir[i] == ']' || satir[i] == ')' || satir[i]== '}'){
         sayi--;
         S.pop();
		 if(sayi<0) return sayi+2;	
		}
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
        return sayi;
     
          }

	
void parantezBasma(string x){

//DOSYA KONUMU ALMA
	cout <<" Dosya Konumunu Giriniz(Dosyayý Buraya Sürükleyip Býrakýn): ";
    getline(cin,x);
   
	x.erase(remove(x.begin(),x.end(),'"'),x.end());
	
//Dosya Okuma
	okumaDosyasi.open(x.c_str());//Dosya Açma
    cout<<endl<<endl<<"--->Okunan Dosyanýn Ýçeriði:"<<endl<<endl;

	while(getline(okumaDosyasi, satir)){ //Dosya Okuma Ve Ekrana Yazma
    cout <<" "<< satir.c_str() <<endl;
     	
		 for(int i=0;i<satir.size();i++){
		    for(int j=0;j<par.size();j++){
			   if(par[j] == satir[i]){
			   parantez.push_back(par[j]);
			   }
	     	}
    	}
    }

	//--------Dosya Okuma Son----------------
	
	cout<<endl<<endl<<"Parantezler:"<<endl;
	
	for(int i=0;i<parantez.size();i++)//Vektörün Kapasitesini Aþmadan 
        cout<<parantez[i]<<" ";
	
}
private:
	
};
