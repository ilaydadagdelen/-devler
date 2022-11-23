#include <stdio.h>
int main()
{
    printf("________________________________\n");
    printf("|Araba Markasi   |Arac Kodu     |\n");
    printf("|Renault         |  1           |\n");
    printf("|Mazda           |  2           |\n");
    printf("|Honda           |  3           |\n");
    printf("|Ford            |  4           |\n");
    printf("|_______________________________|\n");

    int r, m, h, f, marka;
    float ucret, ur, um, uh, uf;

    do
    {
        printf("Marka kodunu giriniz: ");
        scanf("%d", &marka);
        printf("Marka ucretini giriniz: ");
        scanf("%d", &ucret);
        switch (marka)
        {
        case 1:
            r++;
            ur += ucret;
            break;
        case 2:
            m++;
            um += ucret;
            break;
        case 3:
            h++;
            uh += ucret;
            break;
        case 4:
            f++;
            uf += ucret;
            break;
        }
    } while (marka!=111);
    if (r>m, r>h, r>f)
    {
        printf("En cok gelen arac markasi Renault (%d kez)\n", r);
    }
    if (m>r, m>h, m>f)
    {
        printf("En cok gelen arac markasi Mazda (%d kez)\n", m);
    }
    if (h>r, h>m, h>f)
    {
        printf("En cok gelen arac markasi Honda (%d kez)\n", h);
    }
    if (f>r, f>m, f>h)
    {
        printf("En cok gelen arac markasi Ford (%d kez)\n", f);
    }
    if (ur>um, ur>uh, ur>uf){
        printf("En cok satis yapilan marka Renault (%lf YTL)\n", ur);
    }
    if (um>ur, um>uh, um>uf){
        printf("En cok satis yapilan marka Mazda (%lf YTL)\n", um);
    }
    if (uh>ur, uh>um, uh>uf){
        printf("En cok satis yapilan marka Honda (%lf YTL)\n", uh);
    }
    if (uf>ur, uf>um, uf>uh){
        printf("En cok satis yapilan marka Ford (%lf YTL)\n", uf);
    }
    else
       printf("Gecersiz bilgi girdiniz");
    return 0;

}