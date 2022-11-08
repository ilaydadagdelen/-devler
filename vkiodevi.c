#include<stdio.h>
#include<conio.h>
int main(){
    /*vucut kitle indeksi (vki); kilo kg, boy m cinsinden; kilo/boyun karesi;
    <18.5 zayif
    18.5-24.9 normal
    25-29.9 kilolu
    30-34.9 obez
    35< morbid obez*/
    int kilo;
    float boy, vki;
    printf("Kilonuzu 'kg' Cinsinden Giriniz: ");
    scanf("%d",&kilo);
    printf("Boyunuzu 'm' Cinsinden Giriniz: ");
    scanf("%f",&boy);
    vki=kilo/(boy*boy);
    printf("Vucut Kitle Indeksiniz: %.1f\n", vki);
    if(vki<18.5){
    printf("ZAYIF");
    }
    if(18.5<vki&&vki<25){
    printf("NORMAL");
    }
    if(25<vki&&vki<30){
    printf("KILOLU");
    }
    if(30<vki&&vki<35){
    printf("SISMAN");
    }
    if(35<vki){
    printf("OBEZ");
    }
    getch();
    return 0;
}
