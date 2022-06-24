#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	srand((unsigned)time(NULL));
	int nums[SIZE];

	for(int i=0; i<SIZE; i++){
		nums[i] = rand();
	}

	int min = nums[0];
	int max = nums[0];

	for(int i=1; i<SIZE; i++){
		if(max < nums[i])
			max = nums[i];
		if(min > nums[i])
			min = nums[i];
	}

	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);

	printf("\n");
	return 0;
}