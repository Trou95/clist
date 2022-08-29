#include "clist.h"
#include <string.h>

int	main(void)
{
	t_list* list;
	char str[] = "friend";

	list = list_create(sizeof(char));
	for (int i = 0; i < strlen(str); i++)
		list_add(list, str[i]);

	int e = list_find(list, 'e');
	for (int i = 0; i < e; i++)
		list_remove_at(list, e - i - 1);

	write(1, str, strlen(str)); write(1, " > ", 3); list_print(list);
	
}