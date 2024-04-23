void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *temp_dst;
	char *temp_src;
	size_t i;

	temp_dst = (char *) dst;
	temp_src = (char *) src;
	i = 0;

	if (!dst || !src)
		return NULL;
	else if (dsr > src)
	{
		while (i < len)
		{
			temp_dst[len] = tempp_src[len];
			len--;
		}
	else
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (dst);
}
