#include "../src/clist.h"
#include <string.h>


int main()
{

	c_list* list = list_create(sizeof(char));
	char str[] = "friend";

	for (int i = 0; i < 7; i++)
		list_add(list, str[i]);

	int e = list_find(list, 'e');
	for (int i = 0; i < e; i++)
		list_remove_at(list, e - i - 1);

	printf(str); printf(" > "); list_print(list);
	while (e);

}