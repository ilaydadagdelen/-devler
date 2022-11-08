#include<stdio.h>
#include<conio.h>
int main()
{
    /*lisansustu alimlar icin Ales %50, yds %25, mezuniyet ortalamasi %25
    minimum sart 60 puan (100 üzerinden)
    yds min 70 puan*/
    int alesPuani, ydsPuani, mezuniyetOrtalamasi;
    printf("Ales Puaninizi Giriniz: ");
    scanf("%d",&alesPuani);
    printf("Yds Puanini Giriniz: ");
    scanf("%d",&ydsPuani);
    printf("Mezuniyet Ortalamanizi Giriniz: ");
    scanf("%d",&mezuniyetOrtalamasi);
    float ortalamaPuan;
    ortalamaPuan=(alesPuani*0.50)+(ydsPuani*0.25)+(mezuniyetOrtalamasi*0.25);
    printf("Ortalama Puani: %.2f\n", ortalamaPuan);
    if(ortalamaPuan>=60 && ydsPuani>=70)
    printf("LISANSUSTU ALIMA KABUL EDILDINIZ.");
    else
    printf("LISANSUSTU ALIMA KABUL EDILMEDINIZ.");
    getch();
    return 0;
}