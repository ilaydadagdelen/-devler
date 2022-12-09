#include <stdio.h>
void kucuktenbuyuge(float dizi[])
{
    float temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (dizi[j] < dizi[i])
            {
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\t", dizi[i]);
    }
}
void main()
{
    float dizi[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Dizinin %d. degerini giriniz: ", i + 1);
        scanf("%f", &dizi[i]);
    }
    printf("Olusturdugunuz dizi:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\t", dizi[i]);
    }
    printf("\n");
    printf("Dizinin kucukten buyuge siralanmis hali: \n");
    kucuktenbuyuge(dizi);
}
