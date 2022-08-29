#ifndef CLIST_H
#define CLIST_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct t_list
{
	void* arr;
	size_t length;
	size_t size;
	unsigned int type_size;
} c_list;


c_list* list_create(unsigned int type_size);
void list_add(c_list* list, int item);
void list_addf(c_list* list, float item);
void list_addptr(c_list* list, void* ptr);
void list_remove_at(c_list* list, size_t index);
void* list_item_at(c_list* list, size_t index);
int list_find(c_list* list, int item);
int list_findf(c_list* list, float item);
void list_destroy(c_list* list);
void list_print(c_list* list);

void* ft_cmemcpy(void* dst, const void* src, size_t n);
void* ft_ccalloc(size_t count, size_t size);
int ft_cmemcmp(const void* dst, const void* src, size_t n);





#endif 
