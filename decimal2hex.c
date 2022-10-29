#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	int num, b, len = 0, i = 0, tmp;

	char *bits;
	printf("Enter number to get hex value: ");
	scanf("%d", &num);

	switch (num)
	{
	case 0:
		printf("hex of 0 is %X\n", num);
		break;

	case 1:
                printf("hex of 1 is %X\n", num);
		break;

	case 2:
                printf("hex of 2 is %X\n", num);
		break;

	case 3:
		printf("hex of 0 is %X\n", num);
		break;

	case 4:
		printf("hex of 4 is %X\n", num);
		break;

	case 5:
		printf("hex of 5 is %X\n", num);
                break;

	case 6:
		printf("hex of 6 is %X\n", num);
                break;

	case 7:
                printf("hex of 7 is %X\n", num);
                break;

	case 8:
                printf("hex of 8 is %X\n", num);
                break;

	case 9:
                printf("hex of 9 is %X\n", num);
                break;

	case 10:
                printf("hex of 10(A) is %X\n", num);
                break;

	case 11:
                printf("hex of 11(B) is %X\n", num);
                break;

	case 12:
		printf("hex of 12(C) is %X\n", num);
                break;
	case 13:
		printf("hex of 13(D) is %X\n", num);
                break;

	case 14:
                printf("hex of 14(E) is %X\n", num);
               break;

	case 15:
		printf("hex of 15(F) is %X\n", num);
                break;
	}

	if (num > 15)
	{
		tmp = num;
		while (tmp != 0)
		{
			tmp /= 16;
			len++;
		}

		bits = malloc(len);

		while (num != 0)
		{
			b = num % 16;
			num /= 16;
			bits[i] = b;
			i++;
		}


		i = i - 1;
		while (i >= 0)
		{
			printf("%X", bits[i]);
			i--;
		}
		printf("\n");
	}
	return (0);
}
