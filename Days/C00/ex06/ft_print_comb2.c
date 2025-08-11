#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numb(char x, char y)
{
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
	ft_putchar(' ');
	ft_putchar(y / 10 + '0');
	ft_putchar(y % 10 + '0');
	if (x != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numb(a, b);
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb2();
}*/
