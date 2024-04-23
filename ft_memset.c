void	*ft_memset(void *b, int c. size_t len)
{
	char	*temp;

	temp = (char *) b;
	while (len > 0)
	{
		*temp = (char) c;
		temp++;
		len--;
	}
	return (b);
}
