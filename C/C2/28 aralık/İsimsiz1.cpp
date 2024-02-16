#include <stdio.h>
#include <conio.h>
 main(){
 	FILE *yaz;
 	int x,y;
 	yaz=fopen("deneme.txt",w);
 	printf("1.sayýyý gir;");
 	scanf("%d",&x);
 	printf("2.sayýyý gir;");
 	scnaf("%d",&y);
 	fputs("Ýki sayýnýn toplamý!!!\n",yaz);
 	fprintf(yaz,"%d + %d = %d",x,y,x+y);
 	fclose(yaz);
 	printf("Bilgiler kaydedildi!");
 }
