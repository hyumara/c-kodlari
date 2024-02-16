#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main(){
FILE *ogrencinotlar;
char ad[10];
int notu=0, nosu=0;
ogrencinotlar=fopen("ogrencilernotlar.txt","r");
while(!feof(ogrencinotlar)){
	fscanf(ogrencinotlar,"%d\t%s\t%d\n",&nosu,&ad,&notu);
	printf("%d\t%s\t%d\n",nosu,ad,notu);
	
}
fclose(ogrencinotlar);
getch();
}
