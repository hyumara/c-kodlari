#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main(){
 srand(time(NULL));
 int sayi1=0,sayi2=0;
 printf("birinci sayiyi gir: ");
 scanf("%d",&sayi1);
 printf("ikinci sayiyi gir: ");
 scanf("%d",&sayi2);
 int sayac=0;

 
 for(int i=0;i<15;++i){
 	int sayi=0;
 	sayi=sayi1+rand()%sayi2-sayi1;
    int asalmi=0;
     for(int i=2 ; i<sayi ; i++){
          if(sayi % i == 0){
               asalmi++;
          }
     }
     
     if(asalmi==0)
        printf("%d ",sayi);
         sayac++;
       
 }
 printf("%d",sayac);
}
