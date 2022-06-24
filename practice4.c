#include <stdio.h>
#define X 3
#define Y 5

int main(void)
{
	int nums[X][Y] = {{9, 4, 8, 2, 1}, {5, 1, 6, 4, 2}, {5, 8, 3, 5, 7}};

	int sumOfX = 0;
	int sumOfY = 0;

	for(int x=0; x<X; x++){
		for(int y=0; y<Y; y++){
			sumOfX += nums[x][y];
		}
		printf("%d행의 합계: %d\n", x, sumOfX);
		sumOfX = 0;
	}

	for(int y=0; y<Y; y++){
		for(int x=0; x<X; x++){
			sumOfY += nums[x][y];
		}
		printf("%d열의 합계: %d\n", y, sumOfY);
		sumOfY = 0;
	}

	printf("\n");
	return 0;
}