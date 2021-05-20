#include <stdio.h>

void	*ft_memcpy (void *to, void *source, size_t n)
{
	unsigned int	i;
	unsigned char	*eth_1;
	unsigned char	*eth_2;

	i = 0;
	eth_1 = (unsigned char *)to;
	eth_2 = (unsigned char *)source;
	if (to != source)
	{
		while (i < n)
		{
			eth_1[i] = eth_2[i];
			i++;
		}
	}
	return (eth_1);
}
