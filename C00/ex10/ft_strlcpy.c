unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	size = 0;
	i = 0;
	while (src[i++] == '\0' || size < src)
	{
		src[i] = dest[i];
		size++;
	}
	src[i] = '\0';
	return (size);
}

int	main(void)
{
	return (0);
    unsigned int size;
    char teste[10];

    ft_strlcpy(teste, "hello", size);
    printf("%i", size);
}