#include <stdio.h>
#include <conio.h>
#include<string.h>
main(){
	FILE *ogrencinotlar;
	char ad[10],isim[10];
	int notu=0,nosu=0,max=0;
	ogrencinotlar=fopen("ogrencinotlar.txt","r");
	while(!feof(ogrencinotlar)){
		fscanf(ogrencinotlar,"%d\t%s\t%d\n",&nosu,&ad,&notu);
		printf("%d\t%s\t%d\n",nosu,ad,notu);
		if(notu>max){
			max=notu;
			strcpy(isim,ad);
		}
	}
	printf("en yuksek not %d %s nin ",max,ad);
	fclose(ogrencinotlar);
	getch();
}
