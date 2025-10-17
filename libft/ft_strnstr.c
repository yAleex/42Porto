#include "libft.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int	w;
	char	*sub;

	w = 0;
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (0);
	while (w < len - ft_strlen(needle))
	{
		sub[w + 2] = sub[w] + haystack[w + 1] + haystack[w + 2];
		if (sub == needle)
			return (haystack[w]);
		w++;
	}
	return (0);
}
