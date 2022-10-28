/* Author: Francis Ofori Anane
 * Date: 28/10/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * pow - calculate num raised to the power of p.
 *
 * @base: The base number.
 * @p: The exponent.
 *
 * Return: num raised to the power of p.
 */

int _pow(int base, int e)
{
	int p;

	for(p = 1; e > 0; e--)
	{
		p = base * p;
	}

	return(p);
}

/**
 * binary2decimal - Converts binary number to it equivalent decimal value
 *
 * @bin: The binary number to convert
 *
 * Return: Decimal value of the binary .
 */
int binary2decimal(int64_t bin)
{
	int exp = 0, tmp, j = 0, dec = 0, bit;
	char *int_s;

	if (bin == 0)
		return (0);
	if (bin == 1)
		return (1);

	tmp = bin;
	while (tmp != 0)
	{
		tmp /= 10;
		exp++;
	}
	int_s = malloc(exp);
	if (int_s == NULL)
		return (-1);
	while (bin != 0)
	{
		int_s[j] = (bin % 10) + '0';
		bin /= 10;
		j++;
	}
	j = j - 1;
	while (j >= 0)
	{
		if (int_s[j] == '1')
			bit = 1;
		if (int_s[j] == '0')
			bit = 0;

		dec += bit *  _pow(2, exp-1);
		exp--;
		j--;
	}
	free(int_s);
	return (dec);
}
