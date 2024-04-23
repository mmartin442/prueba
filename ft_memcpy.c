void ft_memcpy(void *dst, const void *src, size_t n)
{
	char *temp_dst;
	const char *temp_src;

	temp_dst = (char*)dst;
	temp_src = (const char) *src;
   	if (!dst && !src)
        return (dst);

	while (n-- > 0)
	{
		*temp_dst++ = *temp_src++;
	}
	return (dst);
void ft_memcpy(void *dst, const void *src, size_t n)
{
	char *temp_dst;
	char *temp_src;

	temp_dst = (char) *dst;
	temp_src = (char) *src;
   	if (!dst && !src)
        return (dst);

	while (n-- > 0)
	{
		temp_dst++ = temp_src++;
	}
	return (dst);
}}
