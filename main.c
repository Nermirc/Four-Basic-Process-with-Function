#include <stdio.h>
#include <stdlib.h>


    float dortislem(float emir, float enver, char islem) {
    if (islem == '+') {
        return emir + enver;
    } else if (islem == '-') {
        return emir - enver;
    } else if (islem == '*') {
        return emir * enver;
    } else if (islem == '/') {
        if (enver != 0) {
            return emir / enver;
        } else {
            printf("Bölme iþlemi sýfýra bölünemez.\n");
            return 0;  // Varsayýlan bir deðer veya hata kodu döndürün.
        }
    } else {
        printf("Yanlýþ operatör girdiniz.\n");
        return 0;  // Varsayýlan bir deðer veya hata kodu döndürün.
    }
}





int main()
{
    //Klavyeden girilen iki tamsayinin toplamini,farkýný,carpýmýný,bolumunu gerceklestiren
    //C programýný fonksiyon kullanarak yazýnýz.
    int sayi1,sayi2;
    char islem;
    printf("Lutfen 2 adet sayi giriniz.\n");
    scanf("%d %d",&sayi1,&sayi2);
    getchar();
    printf("Hangi islemi yapmak istiyorsunuz (+ - * /) ?\n");
    scanf("%c",&islem);
    float sonuc= dortislem(sayi1,sayi2,islem);
    if(sonuc!=0){
        printf("Islemin sonucu %.2f\n",sonuc);

    }
    return 0 ;
}
