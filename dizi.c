#include <stdio.h>
float ortalamahesapla(int dizi[]);
int dizidekackezgectigi(int dizi[], int sayi);
int maximum(int dizi[]);
int minimum(int dizi[]);
int ikincibuyukeleman(int dizi[]);
void ortalamadanbuyukdegerler(int dizi[]);
void ortalamadankucukdegerler(int dizi[]);
int parametredenbuyuklerintoplami(int dizi[], int sayi);
float parametredenbuyuklerinortalamasi(int dizi[], int sayi);
void main()
{
    float sonuc;
    int dizi[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Bir tamsayi degeri giriniz: ");
        scanf("%d", &dizi[i]);
    }
    printf("Olusturdugunuz dizinin aritmetik ortalamasi: %.2f\n", ortalamahesapla(dizi));
    int sayi;
    printf("Bir eleman giriniz: ");
    scanf("%d", &sayi);
    if (dizidekackezgectigi(dizi, sayi) != 0)
    {
        printf("Olusturdugunuz dizide %d elemani %d kez gecti.\n", sayi, dizidekackezgectigi(dizi, sayi));
    }
    else
    {
        printf("Olusturdugunuz dizide %d elemani bulunmamaktadir.\n", sayi);
    }
    printf("Olusturdugunuz dizinin maximum degeri: %d\n", maximum(dizi));
    printf("Olusturdugunuz dizinin minimum degeri: %d\n", minimum(dizi));
    printf("Olusturdugunuz dizide ikinci buyuk eleman: %d\n",ikincibuyukeleman(dizi));
    printf("Olusturdugunuz dizinin ortalama degerinden daha buyuk olan degerleri: \n");
    ortalamadanbuyukdegerler(dizi);
    printf("Olusturdugunuz dizinin ortalama degerinden daha kucuk olan degerleri: \n");
    ortalamadankucukdegerler(dizi);
    printf("Bir deger giriniz: ");
    scanf("%d", &sayi);
    printf("Girdiginiz degerden buyuk dizi elemanlarinin toplami: %d\n", parametredenbuyuklerintoplami(dizi, sayi));
    printf("Bir deger giriniz: ");
    scanf("%d", &sayi);
    printf("Girdiginiz degerden buyuk dizi elemanlarinin ortalamasi: %.1f\n", parametredenbuyuklerinortalamasi(dizi, sayi));
}
float ortalamahesapla(int dizi[])
{
    int toplam;
    for (int i = 0; i < 5; i++)
    {
        toplam += dizi[i];
    }
    float ort = toplam / 5;
    return ort;
}
int dizidekackezgectigi(int dizi[], int sayi)
{
    int sayac = 0;
    for (int i = 0; i < 5; i++)
    {
        if (sayi == dizi[i])
        {
            sayac++;
        }
    }
    return sayac;
}
int maximum(int dizi[])
{
    int max;
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > max)
        {
            max = dizi[i];
        }
    }
    return max;
}
int minimum(int dizi[])
{
    int min = dizi[1];
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] < min)
        {
            min = dizi[i];
        }
    }
    return min;
}
int ikincibuyukeleman(int dizi[])
{
    int max, max2;
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > max)
        {
            max2 = max;
            max = dizi[i];
        }
        else if (dizi[i] > max2 && dizi[i] < max)
        {
            max2 = dizi[i];
        }
    }
    return max2;
}
void ortalamadanbuyukdegerler(int dizi[])
{
    int toplam;
    float ortalama;

    for (int i = 0; i < 5; i++)
    {
        toplam += dizi[i];
    }
    ortalama = toplam /5;
    
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > ortalama)
        {
            printf("%d\n", dizi[i]);
        }
    }
}
void ortalamadankucukdegerler(int dizi[])
{
    int toplam;
    float ortalama;

    for (int i = 0; i < 5; i++)
    {
        toplam += dizi[i];
    }
    ortalama = toplam /5;
    
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] < ortalama)
        {
            printf("%d\n", dizi[i]);
        }
    }
}
int parametredenbuyuklerintoplami(int dizi[], int sayi)
{
    int toplam;
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > sayi)
        {
            toplam += dizi[i];
        }
    }
    return toplam;
}

float parametredenbuyuklerinortalamasi(int dizi[], int sayi)
{
    int toplam, sayac = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > sayi)
        {
            toplam += dizi[i];
            sayac++;
        }
    }
    float ort = toplam / sayac;
    return ort;
}
