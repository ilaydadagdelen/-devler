#include <stdio.h>
#include<conio.h>
int main()
{
    int satirsayisi, a, b, kare = 1;
    printf("satir sayisini giriniz: ");
    scanf("%d", &satirsayisi);
    for (a = 0; a < satirsayisi; a++)
    {
        for (b = 0; b < kare; b++)
        {
            printf("#");
        }
        printf("\n");
        kare++;
    }
    getch();
    return 0;
}