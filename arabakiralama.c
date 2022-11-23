#include<stdio.h>
#include<conio.h>
int main(){
    int gun, km, ucret;
    char tip;
    
    printf("Kiralayacaginiz araba tipini giriniz: ");
    scanf("%c",&tip);
    printf("Kiralayacaginiz gun sayisini giriniz: ");
    scanf("%d",&gun);
    printf("Kullanacaginiz km sayisini giriniz: ");
    scanf("%d",&km);
    switch(tip){
        case'a':
        case'A':ucret=gun*20+km*18;
        break;
        
        case'b':
        case'B':ucret=gun*32+km*22;
        break;
        
        case'c':
        case'C':ucret=gun*43+km*28;
        break;
        
        case'p':
        case'P':ucret=gun*51+km*36;
        break;
        
    }
    printf("Odemeniz gereken tutar = %d TL", ucret);
    getch();

    return 0;
}