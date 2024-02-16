#include <stdio.h>
#include <conio.h>
struct kayit{
		char ad[10];
		int no;
		int sinif;
	};
main(){
	struct kayit ogrenci;
	printf("ogrenci nosu ");
	scanf("%d",&ogrenci.no);
	printf("ogrenci adi ");
	scanf("%s",&ogrenci.ad);
	printf("ogrenci sinifi ");
	scanf("%d",&ogrenci.sinif);
	
	
	printf("\n*** Girilen Bilgiler ***\n");
	printf("\n Ogrenci nosu:%d",ogrenci.no);
	printf("\n Ogrenci adi:%s",ogrenci.ad);
	printf("\n Ogrenci sinifi:%d",ogrenci.sinif);
}
