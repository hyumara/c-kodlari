#include <stdio.h>
#include <conio.h>
main(){
	FILE *yaz;
	int x,y;
	yaz=fopen("deneme.txt","w");
	printf("1.sayiyi girin ");
	scanf("%d",&x);
	printf("2.sayiyi girin ");
	scanf("%d",&y);
	fputs("iki sayinin toplami!!!\n",yaz);
	fprintf(yaz,"%d + %d =%d",x,y,x+y);
	fclose(yaz);
	printf ("Bilgiler kaydedildi.");
	getch();

	
}
