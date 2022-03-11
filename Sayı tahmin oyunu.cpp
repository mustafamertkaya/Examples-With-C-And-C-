#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
  int tahmin;
  char cevap = 'e';

  srand(time(0));
  while (cevap == 'e') {
    // 0 ile 100 arasinda [0, 100) bir sayi belirler
    int rastgele_sayi = rand() % 100;

    cout << "0 ile 100 arasinda bir sayi tuttum." << endl;

    cout << "Hadi tahmin et: ";
    cin >> tahmin;

    while (tahmin != rastgele_sayi) {
      if (tahmin < rastgele_sayi) {
        cout << tahmin << " tuttugum sayidan kucuk." << endl;
      } else {
        cout << tahmin << " tuttugum sayidan buyuk." << endl;
      }

      cout << "Tekrar tahmin et: ";
      cin >> tahmin;
    }

    cout << "Buldun tebrikler. Tuttugum sayi " << rastgele_sayi << " idi."
         << endl;

    cout << "Yeniden oynamak ister misin?" << endl;
    cout << "(Evet: e, Hayir: h): ";
    cin >> cevap;
  }

  cout << "Gule gule..." << endl;

  return 0;
}

