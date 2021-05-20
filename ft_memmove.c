#include "libft.h"

void	toolong(size_t n, char *dest, const char *source)
{
	unsigned int	i;

	i = n;
	while (i > 0)
	{
		dest[i - 1] = source[i - 1];
		i--;
	}
}

void	*ft_memmove(void *to, const void *src, size_t n)
{
	char			*dest;
	const char		*source;
	unsigned int	i;

	source = src;
	dest = to;
	if (!to && !src)
		return (NULL);
	if (dest <= source)
	{
		i = 0;
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else
	{
		toolong(n, dest, source);
	}
	return (dest);
}
