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
            printf("B�lme i�lemi s�f�ra b�l�nemez.\n");
            return 0;  // Varsay�lan bir de�er veya hata kodu d�nd�r�n.
        }
    } else {
        printf("Yanl�� operat�r girdiniz.\n");
        return 0;  // Varsay�lan bir de�er veya hata kodu d�nd�r�n.
    }
}





int main()
{
    //Klavyeden girilen iki tamsayinin toplamini,fark�n�,carp�m�n�,bolumunu gerceklestiren
    //C program�n� fonksiyon kullanarak yaz�n�z.
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
