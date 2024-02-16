#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
char cumle[100];
int asayisi=0;
int seslisayisi;
printf("Bir cumle giriniz: ");
gets(cumle);
for (int i=0;i<strlen(cumle);i++){
	if (cumle[i]=='a'){
		asayisi++;}}
printf("Cumledeki a sayisi: %d",asayisi);
	
}
