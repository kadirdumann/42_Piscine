int	ft_atoi(char *str)
{
	int	c;
	int	rev;
	int	res;

	c = 0;
	rev = 1;
	res = 0;
	while ((str[c] >= '\t' && str[i] <= '\r') || str[c] == ' ')
			c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
				rev *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * rev);
}
