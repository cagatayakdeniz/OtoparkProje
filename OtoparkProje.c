#include<stdio.h>
#include<stdlib.h>

struct Arac
{
     char plaka[10];
     int model;
     char renk[100];
 struct Saat
     {
     int saniye;
     int dakika;
     int saat;
     }saat;
};


void AracEkle(int m,int n,struct Arac arac[])
{
    int i,b=1;
    for(i=m;i<n;i++)
    {
        printf ("\t\t\t\t\t%d.Arac Bilgileri\n",b);
        b++;
        printf("Arac Plakasi : ");
        scanf("%s",&arac[i].plaka);
        printf("Arac Modeli : ");
        scanf("%s",&arac[i].model);
        printf("Arac Rengi : ");
        scanf("%s",&arac[i].renk);
        printf("Giris Saati : ");
        scanf("%d %d %d",&arac[i].saat.saat,&arac[i].saat.dakika,&arac[i].saat.saniye);
    }
}

void AraclariListele(int a,struct Arac arac[])
{
    printf ("\t\t\t\t\tArac Listesi\n\n");
    for(int i=0;i<a;i++)
    {
        printf ("\t\t%d.Arac Bilgileri\n",i+1);
        printf("Arac Plakasi: %s\n",arac[i].plaka);
        printf("Arac Modeli: %d\n",arac[i].model);
        printf("Arac Rengi: %s\n",arac[i].renk);
        printf("Giris Saati : %d : %d : %d\n\n",arac[i].saat.saat,arac[i].saat.dakika,arac[i].saat.saniye);
    }
}


int main()
{
     struct Arac arac[1000];
     int a=0;
     int mevcut=0;
     int islem;

     printf("\t\t\tBILGILENDIRME!!!");
     printf("\n\n*Arac Plakasini Girerken Arada Bosluk Birakmayiniz.");
     printf("\n\n*Arac Giris Saatini Girerken ( Saat Dakika Saniye ) olacak sekilde Arada 1 Adet Bosluk Birakiniz.\n\n");

    while(islem!=3)
    {
        printf("\n\t****MENU*******");

        printf("\n1.Arac Ekle\n2.Arac Listesi\n3.Cikis");
        printf("\n\nIslem Seciniz: ");
        scanf("%d",&islem);
        if(islem==1)
        {
            AracEkle(mevcut,(mevcut+5),arac);
            a+=5;
            mevcut += 5;
        }
        else if(islem==2)
        {
             AraclariListele(a,arac);
        }
        else if(islem==3)
        {
            islem=3;
            break;
        }
        else{
            printf("\n\nIslem Bulunamadi");
        }
    }
}
