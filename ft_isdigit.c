int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isdigit('5'));
}
*/
