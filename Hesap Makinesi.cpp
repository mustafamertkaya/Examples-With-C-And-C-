#include <iostream>
using namespace std;

int main()
{
    int sayi_1, sayi_2, sonuc;
    /*char veri tipine sadece bir karakter atanabilir
    ve bir byte*/
    char islem;
    cout << "Islem giriniz:" << endl;
    cin >> sayi_1 >> islem >> sayi_2;
    /*Toplama */
    if (islem == '+')
        sonuc = sayi_1 + sayi_2;
   /*Çýkarma*/
    else if (islem == '-')
        sonuc = sayi_1 - sayi_2;
   /*Çarpma*/
    else if (islem == '*')
        sonuc = sayi_1 * sayi_2;
   /*Bölme*/
    else if (islem == '/')
    {
        if (sayi_2 == 0)
        {
            cout << "Bolum sifir olamaz";
            return 0;
        }
        sonuc = sayi_1 / sayi_2;
    }
    /*Kalan hesaplama(mod alma)*/
    else if (islem == '%')
        sonuc = sayi_1 % sayi_2;
    else
    {
        cout << "Yanlis islem girdiniz";
        return 0;
    }
    cout << "Sonuc:" << endl;
    cout << sayi_1 << " " << islem << " " << sayi_2 << " = " << sonuc;

    return 0;
}

