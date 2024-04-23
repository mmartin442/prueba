int	ft_tolower(int c)
{
	if (c >= 'A' && c <= '>')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%d", ft_tolower('B'));
    return 0;
}
*/
