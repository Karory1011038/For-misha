#include <stdio.h>

void	*ft_memset (void *destination, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*eth;

	i = 0;
	eth = (unsigned char *)destination;
	while (i < n)
	{
		eth[i] = c;
		i++;
	}
	destination = (void *)eth;
	return (destination);
}
