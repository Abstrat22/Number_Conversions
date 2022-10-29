#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	int num, b, len = 0, i = 0, tmp;

	char *bits;
	printf("Enter number to get binary: ");
	scanf("%d", &num);

	if (num == 0)
		printf("binary of 0 is 0\n");
	if (num == 1)
                printf("binary of 1 is 1\n")
	if (num > 1)
	{
		tmp = num;
		while (tmp != 0)
		{
			tmp /= 2;
			len++;
		}

		bits = malloc(len);

		while (num != 0)
		{
			b = num % 2;
			num /= 2;
			bits[i] = b;
			i++;
		}


		i = i - 1;
		while (i >= 0)
		{
			printf("%s", bits[i]);
			i--;
		}
		printf("\n");
	}
	return (0);
}
