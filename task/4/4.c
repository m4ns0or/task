#include <stdio.h>
#include <conio.h>
#include <string.h>

int countPattern(int n, char pat[])
{

	int patt_int = 0;

	int power_two = 1;


	int all_ones = 0;


	for (int i = strlen(pat) - 1; i >= 0; i--) {
		int current_bit = pat[i] - '0';
		patt_int += (power_two * current_bit);
		all_ones = all_ones + power_two;
		power_two = power_two * 2;
	}

	int count = 0;
	while (n && n >= patt_int) {


		if ((n & all_ones) == patt_int) {
			count++;
		}

		n = n >> 1;
	}
	return count;
}


int main()
{
	int x = 86;
	char pattern[5] = "11";
	printf("'11' in the representation of %d is: %d times",x, countPattern(x, pattern));
}




