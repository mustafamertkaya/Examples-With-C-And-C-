#include <stdio.h>
#include <conio.h>
 
// Kullanýcýnýn istediði karakter ile üçgen yapma
 
int main(){
    
    int sira, i, j, yildizSayisi=1, boslukSayisi;
    char karakter;
    
    printf("Sira Giriniz: ");
    scanf("%d", &sira);
    
    printf("Girilecek Karakter: ");
    scanf(" %c", &karakter);
    
//Boþluk Sayýsýný Sira Sayisindan bir az olmasý lazým
    boslukSayisi = sira - 1;
    
//Ýlk For satýr sayýsýný yazdýrýr (üçgenin boyu)
    for(i=0; i<sira; i++){
        
//Ýkinci For ile boþluk yazdýrýlýr
        for(j=0; j<boslukSayisi; j++)
            printf(" ");
        
// Üçüncü For ise Ekrana Yildiz yazdirir
        for(j=0; j<yildizSayisi; j++)
            printf("%c", karakter);    
        
//Her Yildiz yazdýrma iþleminden sonra aþaðý inilir 
        printf("\n");
        
//Her aþaðý indiðinde 2 tane fazladan yildiz yazdýrmak için yildizSayisi 2 artirilir
        yildizSayisi+=2;   // yildizSayisi = yildizSayisi + 2;  de yazdýrýlabilir
        
//Her aþaðý indildiðinde Boþluk sayýsýnýn 1 azalmasý lazým
        boslukSayisi--;
        
    }
    
    
    getch();
    return 0;
}
