#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi[5];
	int gecici=0;
	printf("5 adet sayi girin:\n");
	for(int i=0;i<5;i++){
		printf("%d indeksli sayiyi girin:",i);
		scanf("%d",&sayi[i]);
	}
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(sayi[j]<sayi[i])
			{
				gecici=sayi[i];
				sayi[i]=sayi[j];
				sayi[j]=gecici;
			}
		
		}
	}
	for(int i=0;i<5;i++)
	    printf("\n%d",sayi[i]);
	return 0;
}
