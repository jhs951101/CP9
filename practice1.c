#include <stdio.h>
#define SIZE 12

int main(void)
{
	int days[SIZE] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for(int i=0; i<SIZE; i++){
		printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]);
	}

	printf("\n");
	return 0;
}