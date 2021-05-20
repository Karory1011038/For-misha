#include <stdio.h>

void	*ft_bzero (void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*eth;

	i = 0;
	eth = (unsigned char *)s;
	while (i < n)
	{
		eth[i] = 0;
		i++;
	}
	s = (void *)eth;
	return (0);
}
