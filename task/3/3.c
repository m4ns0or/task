#include <stdio.h>


void pow(int N)
{

	int count = 0;

	while (N > 0) {


		if (N & 1) {
			count++;
		}

		N = N >> 1;
	}


	printf("it appaered %d times \n", count);
}


int main()
{

	int N = 22;

	pow(N);
	return 0;
}
