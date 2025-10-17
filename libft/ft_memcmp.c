#include "libft.h"

int	memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)ptr1;
   	p2 = (const unsigned char *)ptr2;
	i = 0;
	while (i < num)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
