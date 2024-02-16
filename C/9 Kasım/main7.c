#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int toplam=0;
	int dizi[5];
	for (int i=0;i<5;i++){
		printf("%d . sayiyi girin: ",i+1);
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	printf("Toplam = %d",toplam);
	return 0;
}
