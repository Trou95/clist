#include "clist.h"

void	*ft_cmemcpy(void	*dst, const void	*src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}

void	*ft_ccalloc(size_t count, size_t size)
{
	void	*ptr;
	size_t		i;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}

int	ft_cmemcmp(const void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((char *)dst + i) != *((char *)src + i))
			return (0);
		i++;
	}
	return (1);
}

void *ft_cfree(void *dst, void *src)
{
	if (dst == NULL || src == NULL)
		return NULL;
	free(src);
	return dst;
}
