#include <stdio.h>
#include <stdlib.h>

/* klavyeden negatif bir say� girilene kadar girilen say�lar�n ortalams�n� ekranda gosteren gosteren prog.*/

int main() {
	int sayiadet=0;
	int ortalama=0;
	int sayi=0;
	int toplam=0;
	do {
		prinf("Sayi girin:");
		scanf("%d",&sayi);
		toplam+=sayi;
		sayiadet++;
		ortalama=toplam/sayiadet;
		printf("Ortalama: %d",ortalama);
		
	}while(sayi>0);
	
	return 0;
}
