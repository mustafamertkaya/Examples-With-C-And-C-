#include<iostream>

using namespace std;


int main()
{

int a,i,toplam;

cout<<"****FAKTORIYEL HESAPLAMA****"<<endl;
cout<<endl;
cout<<"Faktoriyeli alinacak sayiyi giriniz: ";
cin>>a;
i=1;
toplam=1;
while(i<a)
{
i++;
toplam=toplam*i;
}
cout<<endl;
cout<<a<<"!= "<<toplam<<endl;
cout<<endl;
}
