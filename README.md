# Dynamic / Generic clist
A simple project for creating dynamic lists with different data types in c


### Contents
- [Functions](#functions)
- [introduction](#getting-started)
- [Examples](#examples)


### Functions

    t_list* list_create(unsigned int type_size);
    void list_destroy(t_list* list);
    void list_print(t_list* list);
    void list_add(t_list* list, int item);
    void list_addptr(t_list* list, void* ptr);
    void list_remove_at(t_list* list, size_t index);
    void* list_item_at(t_list* list, size_t index);
    int list_find(t_list* list, int item);
    void list_addf(t_list* list, float item);
    int list_findf(t_list* list, float item);
    void* ft_cmemcpy(void* dst, const void* src, size_t n);
    void* ft_ccalloc(size_t count, size_t size);
    int ft_cmemcmp(const void* dst, const void* src, size_t n);
    void* ft_cfree(void* dst, void* src);

### Getting Started

#### Creating list

    t_list *list = list_create(sizeof(int));
    
#### Adding item to list

    list_add(list,5);
    
#### Removing item from list

    list_remove_at(list, 5);
    
#### Get list item

    t_list *list = create_list(sizeof(int));
    
    for(int i = 0; i < 10; i++);
      list_add(list, i);
      
    for(int i = 0; i < 10; i++);
      printf("%d\n", *(int*)list_item_at(list, i));
    
#### List find

    list_find(list, 2);
    
#### Working with different types

    t_list *list = list_create(sizeof(char));
    list_add(list, 'A');
    
    
    typedef struct s_vars
    {
     int x;
     int y;
    } t_vars;
    
    t_vars *list = list_create(sizeof(t_vars));
    
    t_vars data;
    data.x = 20;
    list_addptr(list,&data);
    
    printf("%d\n", ((t_vars*)list->item_at(list,0)).x);
    



### Examples

    t_list *list = create_list(sizeof(int));

	list_add(list, 5);
	list_add(list, 10);

	list_remove_at(list, list_find(list, 10));
	
	for(int i = 0; i < list->length; i++)
		printf("%d\n", *(int*)list_item_at(list, i));
    
    


    
