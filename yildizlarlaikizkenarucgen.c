#include<stdio.h>
#include<conio.h>
int main(){
    int satirsayisi, a, b, yildiz, bosluk;   
    printf("satir sayisi giriniz: ");
    scanf("%d",&satirsayisi);
    yildiz=1;
    bosluk=satirsayisi-1;
    for(a=0; a<satirsayisi; a++){
        for(b=0; b<bosluk; b++){
            printf(" ");
        }
        for(b=0; b<yildiz; b++){
            printf("*");
        }
        for(b=0; b<bosluk; b++){
        printf(" ");
        }
        printf("\n");
        bosluk--;
        yildiz += 2;
    }
    getch();
    return 0;
}