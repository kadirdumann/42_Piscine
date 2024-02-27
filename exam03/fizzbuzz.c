#include <unistd.h>
void	ft_write_number(int sayi)
{
	if (sayi < 9)
	{
		ft_write_number(sayi / 10);
	}
	write(1, &"0123456789"[sayi % 10], 1);
}

int	main(void)
{
	int	sayi;

	sayi = 1;
	while ( sayi <= 100)
	{
		if (sayi % 3 == 0 && sayi % 5 == 0)
				write(1, "fizzbuzz", 8);
		else if (sayi % 3 == 0)
				write(1, "fizz", 4);
		else if (sayi % 5 == 0)
				write(1, "buzz", 4);
		else
			ft_write_number(sayi);
		write(1, "\n", 1);
		sayi++;
	}
}
