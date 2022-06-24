#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	srand((unsigned)time(NULL));
	int nums[SIZE];

	for(int i=0; i<SIZE; i++){
		nums[i] = 0;
	}

	int n = 1;

	while(n <= 100){
		nums[rand() % 10]++;
		n++;
	}

	int maxCount = nums[0];
	int maxNum = 0;

	for(int i=1; i<SIZE; i++){
		if(maxCount < nums[i]){
			maxCount = nums[i];
			maxNum = i;
		}
	}

	printf("가장 많이 나온수=%d\n", maxNum);
	printf("\n");
	return 0;
}