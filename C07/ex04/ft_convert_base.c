#include <stdio.h>

//Convert from_base to decimal!
//Convert decimal to to base!
//int	ft_pow(int nb, int power);
int	ft_pow(int base, int power);

int	ft_base_decimal(char *base, int base_length)
{
	int	digit;
	int	decimal;
	int	power;
	int	i;

	decimal = 0;
	power = 0;
	i = base_length - 1;
	power = 0;
	while (0 <= i)
	{
		digit = base[i];
		if (digit >= '0' && digit <= '9')
			digit -= '0';
		else
			digit = digit - 'A' + 10;
		decimal += digit * ft_pow(base_length, power);
		power++;
		i--;
	}
	return (decimal);
}

int	main(void)
{
	char number[] = "cabc";
	int base = 2;
	int decimal = ft_base_decimal(number, base);
	printf("%s in base %d is %d in decimal\n", number, base, decimal);
	return (0);
}