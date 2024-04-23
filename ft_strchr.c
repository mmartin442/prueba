int	*ft_strchr(const char *s, int c)
{
	if (*s == '\0')
	{
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
			s++;
		}
	}
	return (NULL);
}
/*
Dado que s es un puntero constante a un carácter, 
se requiere una conversiónexplícita para eliminar 
la calificación de constante (const) 
y devolver un puntero a un carácter sin constante. 
Esto se realiza utilizando la sintaxis (char *), 
que realiza una conversión de tipo de const char * a char *
*/
