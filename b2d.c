#include <stdio.h>
#include <stdlib.h>

int binary2decimal(int64_t bin);

int main(void)
{
	int bin;

	printf("Enter bits to get decimal equivalent: ");

	scanf("%d", &bin);

	printf("%d\n", binary2decimal(bin));

	return (0);
}
