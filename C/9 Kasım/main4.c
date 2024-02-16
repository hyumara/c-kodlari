#include <stdio.h>
#include <stdlib.h>

/* klavyeden negatif bir sayý girilene kadar girilen sayýlarýn ortalamsýný ekranda gosteren gosteren prog.*/

int main() {
	int sayiadet=0;
	int ortalama=0;
	int sayi=0;
	int toplam=0;
	do{
		printf("Sayi girin:");
		scanf("%d",&sayi); 
		if(sayi>=0){
		toplam+=sayi;
		sayiadet++;
		ortalama=toplam/sayiadet;}
	
		
	}while(sayi>=0);
	
	printf("Ortalama: %d \n",ortalama);
	return 0;
}
