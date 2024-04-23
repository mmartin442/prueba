int	*ft_strrchr(const char *s, int c)
{
	char	*position;

	position = NULL;
	while (*s)
	{
		if (*s == c)
		{
			position = ((char *)s);
			return (position);
		}
		i++;
	}
	if (*s == '\0')
	{
		position = ((char *)s);
		return (position);
	}
	return (position);
}
