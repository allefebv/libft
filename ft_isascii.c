int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	char c;
	
	c = '^';
	printf("%d", ft_isascii(c));
	return (0);
}
