#include <stdio.h>
void bin_convert(unsigned n)
{
    if (n > 1)
        bin_convert(n >> 1);

    printf("%d", n & 1);
}
int main() {
    printf("the representation in binary is: ");
    bin_convert(4);
    printf("\n");

    return 0;
}
