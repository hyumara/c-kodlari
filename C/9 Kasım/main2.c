#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int toplam=0;
	int sayi=0;
	do
	{printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	toplam=toplam+sayi;
	}while(sayi!=0);
	printf("%d",toplam);
	return 0;
}
