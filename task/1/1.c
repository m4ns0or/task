#include <stdio.h>

int powerFunc(int y, int n)
{

	int ans = 1;

	while (n > 0) {

		int last_bit = (n & 1);


		if (last_bit) {
			ans = ans * y;
		}

		y = y * y;


		n = n >> 1;
	}

	return ans;
}

int main()
{
	int x = 2, n = 5;
    printf("%d",n, powerFunc(x, n));
    return 0;
}
