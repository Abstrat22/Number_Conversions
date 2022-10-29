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
 * hex2decimal - Converts hex value to it equivalent decimal value
 *
 * @hex: The hex value to convert
 *
 * Return: hex value of the binary .
 */
int hex2decimal(int hex)
{
	int exp = 0, tmp, j = 0, dec = 0, bit;
	char *int_s;

	if (hex <= 15)
		return (hex);

	tmp = hex;
	while (tmp != 0)
	{
		tmp /= 10;
		exp++;
	}
	int_s = malloc(exp);
	if (int_s == NULL)
		return (-1);
	while (hex != 0)
	{
		int_s[j] = (hex % 10) + '0';
		hex /= 10;
		j++;
	}
	j = j - 1;
	while (j >= 0)
	{
		if (int_s[j] == '0')
			bit = 0;
		if (int_s[j] == '1')
			bit = 1;
		if (int_s[j] == '2')
                        bit = 2;
		if (int_s[j] == '3')
                        bit = 3;
		if (int_s[j] == '4')
                        bit = 4;
		if (int_s[j] == '5')
                        bit = 5;
		if (int_s[j] == '6')
                        bit = 6;
		if (int_s[j] == '7')
                        bit = 7;
		if (int_s[j] == '8')
                        bit = 8;
		if (int_s[j] == '9')
                        bit = 9;
		if (int_s[j] == 'A' || int_s[j] == 'a')
                        bit = 10;
		if (int_s[j] == 'B' || int_s[j] == 'b')
                        bit = 11;
		if (int_s[j] == 'C' || int_s[j] == 'c')
                        bit = 12;
		if (int_s[j] == 'D' || int_s[j] == 'd')
                        bit = 13;
		if (int_s[j] == 'E' || int_s[j] == 'e')
                        bit = 14;
		if (int_s[j] == 'F' || int_s[j] == 'f')
                        bit = 15;

		dec += bit *  _pow(16, exp-1);
		exp--;
		j--;
	}
	return (dec);
}
