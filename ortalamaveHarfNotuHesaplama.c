#include<stdio.h>
float ortalamaHesapla(int a, int b);
void main(){
    printf("Programi sonlandirmak icin vize ve final notunu 111 giriniz!\n");
    int vize, final;
    float ort;
    do{ 
        printf("Vize notunu giriniz: ");
        scanf("%d",&vize);
        printf("Final notunu giriniz: ");
        scanf("%d",&final);
        ort=ortalamaHesapla(vize, final);
    if(90<=ort&&ort<=100){
        printf("Ortalama notunuz: %.2f\nHarf notunuz: AA\n",ort);
    }
    else if(85<=ort&&ort<90){
        printf("Ortalama notunuz: %.2f\nHarf notunuz: BA\n",ort);
    }
    else if(80<=ort&&ort<85){
        printf("Ortalama notunuz: %.2f\nHarf notunuz: BB\n",ort);
    }
    else if(75<=ort&&ort<80){
        printf("Ortalama notunuz: %.2f\nHarf notunuz: CB\n",ort);
    }
    else if(70<=ort&&ort<75){
        printf("Ortalama notunuz: %.2f\nHarf notunuz: CC\n",ort);
    }
    else if(65<=ort&&ort<70){
        printf("Ortalama notunuz: %.2f\nHarf notunuz: DC\n",ort);
    }
    else if(60<=ort&&ort<65){
        printf("Ortalama notunuz: %.2f\nHarf notunuz: DD\n",ort);
    }
    else if(ort<60){
        printf("Ortalama notunuz: %.2f\nHarf notunuz: FF\n",ort);
    }
    else if(ort==111){
        printf("Program Sonlandi!");
    }
    else{
        printf("Hata!!\n");
        }
}
while(vize!=111&&final!=111);
}
float ortalamaHesapla(vize, final){
    float ort1=vize*0.4+final*0.6;
    return ort1;
}
