#include <stdio.h>
#include <conio.h>
 main(){
 	FILE *yaz;
 	int x,y;
 	yaz=fopen("deneme.txt",w);
 	printf("1.say�y� gir;");
 	scanf("%d",&x);
 	printf("2.say�y� gir;");
 	scnaf("%d",&y);
 	fputs("�ki say�n�n toplam�!!!\n",yaz);
 	fprintf(yaz,"%d + %d = %d",x,y,x+y);
 	fclose(yaz);
 	printf("Bilgiler kaydedildi!");
 }
