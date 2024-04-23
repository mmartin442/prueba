void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = (char *) s;
	while (n > 0)
	{
		*temp = 0;
		*temp++;
		n--;
	}
}
/*
 * Teniendo la librería, otra forma de hacerla seria así:
 *
 * #include <libft.h>
 *
 *void ft_bzero(void *s, size_t n)
 {
	 ft_memset(s, 0, n);
 }
*/
