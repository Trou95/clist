#include "clist.h"

void* ft_cmemcpy(void* dst, const void* src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*((char*)dst + i) = *((char*)src + i);
		i++;
	}
	return dst;
}

int ft_cmemcmp(const void* dst, const void* src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((char*)dst + i) != *((char*)src + i))
			return 0;
		i++;
	}
	return 1;
}

