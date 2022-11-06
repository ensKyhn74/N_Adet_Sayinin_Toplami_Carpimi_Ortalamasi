#include <stdio.h>
// klavyeden girilen n adet sayının toplamını,çarpımını ve ortalamasını hesapla,ekrana yazdır 

int main() 

{
 
 int toplam = 0;
 int sonuc = 1;

 int i;

 int sayi;
 int adet;
  
 printf("kac adet sayi gireceksiniz?: ");
 scanf("%d",&adet);
 
 for(i = 1 ; i <= adet ; i++)
 {
  printf("%d.sayi: ",i);
  scanf("%d",&sayi);
   
  toplam += sayi;   
  sonuc *= sayi; 
 }	
 
  printf("sayilarin toplami: %d\n",toplam);
  printf("sayilarin carpimi: %d\n",sonuc);
  printf("sayilarin ortalamasi: %.2lf",(double)toplam/adet);
  
  return 0;

}