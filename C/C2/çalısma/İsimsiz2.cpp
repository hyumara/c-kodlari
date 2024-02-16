#include <stdio.h>
#include <conio.h>
main(){
	int *ip1,*ip2,id1,id2;
	ip1=&id1;
	ip2=&id2;
	id1=42;
	*ip2=67;
	printf("deger 1:%d \n ",*ip1);
	printf("deger 2:%d \n ",*ip2);
	printf("adres: %p \n",ip1);
	printf("adres: %p \n",ip2);
	printf ("\n \n");
    printf("adres: %p \n",&ip1);
	printf("adres: %p \n",&ip1);
	getch();
	 
	 
	
}
