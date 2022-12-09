#include <stdio.h>
void ortalamaHesapla(int vizedizi[], int finaldizi[])
{
    int toplamdizi[5];
    float ort[5];
    for (int i = 0; i < 5; i++)
    {
        toplamdizi[i] = vizedizi[i] + finaldizi[i];
    }
    for (int i = 0; i < 5; i++)
    {
        ort[i] = toplamdizi[i] / 2;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("%d. ogrencinin vize notu: %d\n", i + 1, vizedizi[i]);
        printf("%d. ogrencinin final notu: %d\n", i + 1, finaldizi[i]);
        printf("%d. ogrencinin ders ortalamasi: %.1f\n", i + 1, ort[i]);
    }
}
void main()
{
    int vizedizi[5], finaldizi[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d. ogrencinin vize notunu giriniz: ", i + 1);
        scanf("%d", &vizedizi[i]);
        printf("%d. ogrencinin final notunu giriniz: ", i + 1);
        scanf("%d", &finaldizi[i]);
    }

    ortalamaHesapla(vizedizi, finaldizi);
}