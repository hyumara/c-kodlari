#include <stdio.h>
#include <conio.h>
main(){
	
	int numbers[2][3]={{1,2,3},{4,5,6}};
	int  rows = sizeof(numbers)/sizeof(numbers[0]);
	int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
	for (int i =0;i<rows;i++){
		for(int j=0;j<columns;j++)
		printf("%d ",numbers[i][j]);
	printf("\n");
	}
}
