int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%d", ft_strlen("hola567 9"));
    return 0;
}
*/
