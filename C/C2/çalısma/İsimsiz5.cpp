#include <stdio.h>
#include <conio.h>
#include<string.h>
int sayi(char cumle[20]);
int harf(char cumle[20]);
main(){
	char cumle[20];
	int x=0,y=0;
	printf("cumle girin:");
	gets(cumle);
	int harfCount=harf(cumle);
	int sayiCount=sayi(cumle);
	printf("sonuc %d sayi ve %d harf",sayiCount,harfCount);
	
}
int sayi(char cumle[20]){
	int sayac=0;
	int length=strlen(cumle);
	for(int i =0;i<length;++i);{
	 if (cumle[i]>='0' && cumle[i]<='9'   )
	  sayac++;}
	return sayac;
}
int harf(char cumle[20]);{
	int sayac=0;
	int length=strlen(cumle);
	for(int i =0;i<length;++i);
	  if (cumle[i]>='a' && cumle[i]<='z' || cumle[i]>='A' && cumle[i]<='Z'   )
	  sayac++;
	return sayac;
	  
}
