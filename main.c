/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: ilhan
 *
 * Created on 16 Temmuz 2022, 13:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    /*
        // DERS 22 
        //KLAVYEDEN GİRİLEN EN VE BOY DEGERLERİNE GÖRE İÇİ DOLU DÖRTGEN
        int en,boy,i,j;
        printf("En degeri:");
        scanf("%d",&en);
        printf("Boy:\n");
        scanf("%d",&boy);
    
    
        for(i=1;i<=boy;i++)
        {
            for(j=1;j<=en;j++)
            {
                printf("*");
            }
            printf("\n");
        }
     */

    // Klavyeden girilen boy degerine göre dik ücgen

    /*
    int i,j,taban;
    printf("Taban degerini giriniz:\n");
    scanf("%d",&taban);
    
    for(i=1;i<=taban;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     */

    //ici dolu ücgen oluşturma

    /*
    //taban degerini klavyeden girerek simetrigini yapan program yap
    int i,j,taban;
    printf("Taban degerini giriniz:\n");
    scanf("%d",&taban);
    for(i=100;i>=taban;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     */
    /*
    //ici dolu ücgen oluşturma
    int i,j,yildizsayisi=1,bosluksayisi=10;
   for(i=1;i<=10;i++) //ücgenin satır sayisi
   {
       for(j=0;j<=bosluksayisi;j++) //boşluk sayısı yazdırıldı
       {
           printf(" ");//for dögüsü içinde boşluk yazdırıldı.
       }
       for(j=0;j<=yildizsayisi;j++) //yılız sayısı yazdırılır.
       {
           printf("*"); //for döngüsü içinde yıldız yazdırıldı.
       }
       printf("\n");
       yildizsayisi+=2;
       bosluksayisi--;
   }
     */

    /*
    int i,j,satirsayisi,yildizsayisi,bosluksayisi;
    printf("Satır sayısını giriniz:\n");
    scanf("%d",&satirsayisi);
    bosluksayisi=satirsayisi-1;
    for(i=1;i<=satirsayisi;i++) //satir sayısı yazdırıldı.
    {
        for(j=0;j<=bosluksayisi;j++) //bosluk sayısı girildi
        {
            printf("."); //bosluk sayısı yazdırıldı.
        }
        for(j=0;j<=yildizsayisi;j++)//yildiz sayısı yazdırıldı
        {
            printf("*");
        }
        printf("\n");
        yildizsayisi+=2; //Her satırda yukarıdaki satırdan 2 tane yıldız olmalı
        bosluksayisi--; // Her satırda bosluk sayısı 1 azaltılmalı
    }
    
    
    int i,j,bosluksayisi,yildizsayisi;
    bosluksayisi=1;
    yildizsayisi=1;
    
    for(i=0;i<=6;i++)//ücgenin satır sayisi yazdırıldı
    {
        for(j=0;j<=bosluksayisi;j++)
        {
            printf(".");
        }
        for(j=0;j<=yildizsayisi;j++)
        {
            printf("*");
        }
        yildizsayisi++;
        bosluksayisi--;
    }
     

    int n = 0, i = 0, a = 0, b = 8, t;
    for (t = 0; t < 7; t++) {
        if (t <= 3) {
            i++;
            b -= 2;
        }
        else if (t > 3)
 {
            i--;
            b += 2;
        }

        for (n = 0; n < i; n++) {
            printf("*");
        }
        for (a = 0; a < b; a++) {
            printf(" ");
        }
        for (n = 0; n < i; n++) {
            printf("*");
        }
        printf("\n");
    }
*/
    //DERS 23 ÇOK BOYUTLU DİZİİLER
    /*
    int dizi[2][2];
    dizi[0][0]=10; //diizinin [0][0] degerini 10 yaptık
    dizi[0][1]=20;
    dizi[1][0]=30;
    dizi[1][1]=40;
    
    printf("Matrisin 0-0 da bulunan elemanı:%d\n",dizi[0][0]);
    printf("Matrisin 0-1 de bulunan elemanı:%d\n",dizi[0][1]);
    printf("Matrisin 1-0 da bulunan elemanı:%d\n",dizi[1][0]);
    printf("Matrisin 1-1 de bulunan elemanı:%d\n",dizi[1][1]);
    
    printf("dizi[0][0]: %d", dizi[0][0]);
    */
    /*
    int satir,sutun,i,j,k,n;
    printf("Satir SAyisi:");
    scanf("%d",&satir);
    printf("Sutun SAyisi:");
    scanf("%d",sutun);
    int matris[satir][sutun];
    
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("\n Deger:[%d][%d]--->",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
    for(k=0;k<satir;k++)
    {
        for(n=0;n<sutun;n++)
        {
            printf("%d",matris[k][n]);
            
        }
        printf("\n");
    }
     * 
     * 
     * 
     
    int m1[2][2]={10,12,14,20};
    int m2[2][2]={8,16,27,15};
    int toplam[2][2];
    int i,j,k,m;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            toplam[i][j]=m1[i][j]+m2[i][j];
            
        }
    }
    for(k=0;k<2;k++)
    {
        for(m=0;m<2;m++)
        {
            printf(" %d ",toplam[k][m]);
        }
        printf("\n");
    }
     */
    int m1[2][2]={10,20,30,40};
    int m2[2][2]={5,10,15,2};
    int m3[2][2]={2,4,6,8};
    int m4[2][2]={12,10,9,8};
    int toplam[2][2];
    int i,j,k,l;
    //k ve l matrisleri yazdırmak için kullanılacak.
    // j ve i matrisleri toplamak için kullanılacak
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            toplam[i][j]=m1[i][j]+m2[i][j]+m3[i][j]+m4[i][j];
        }
    }
    // matrisleri yazdırmak için;
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf(" %d",toplam[k][l]);
        }
        printf("\n");
    }
        
    
    
    
    
    return (EXIT_SUCCESS);
}  
    

