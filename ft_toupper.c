int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%d", ft_toupper(99));
    return 0;
}
*/
