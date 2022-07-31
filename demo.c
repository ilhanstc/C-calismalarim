#include <stdio.h>

void main() {

 /*   
printf("Merhaba Dünya\n");
printf("*******Mehmet'in Aile Bireyleri*********\n");
printf("Mehmet'in Babası: Kazım\n");
printf("Mehmet'in Annesi: Fadime\n");
printf("Mehmet'in Abisi: Murat\n");
printf("Mehmet'in ablası: Buse");


char kitapadi[20]="Kara Muratin Hayati";

char kitapyazar[10]="Kara Murat";

printf("%s\n", kitapadi);
printf("%s\n", kitapyazar);


char kitapturu[20]="Biyografi";
printf("Kitapturu=%s", kitapturu );


char kitapad[25]="Dunyayı Kurtaran Adam";
char Yazar[25]="Fahrettin Yureklibatur";
char Turu[10]="Hikaye";
char Sayfa[3]="251";
char BasimYil[4]="1997";

printf("**********Kitap Tanitim**********\n\n");
printf("kitapad:%s\nKitapYazar:%s\n",kitapad,Yazar);
printf("Kitapturu:%s\nSayfa Sayisi:%s\nBasim Yili:%s",Turu,Sayfa,BasimYil);
*/

int su,misir,kola,bilet,toplam;
    printf("Mısır adedi:\n");
    scanf("%d",&misir);
    printf("Aldıgınız Mısır Adedi:%d\n",misir);
    
    printf("Kola adedi:\n");
    scanf("%d",&kola);
    printf("Aldıgınız Kola Adedi:%d\n",kola);
    
    printf("Su adedi:\n");
    scanf("%d",&su);
    printf("Aldıgınız Su Adedi:%d\n",su);
    
    printf("Bilet adedi:\n");
    scanf("%d",&bilet);
    printf("Aldıgınız Bilet Adedi:%d\n",bilet);
    
    toplam:((misir*3)+(su*1)+(kola*4)+(bilet*8));
    
    printf("Toplam borcunuz:%d",toplam);



}