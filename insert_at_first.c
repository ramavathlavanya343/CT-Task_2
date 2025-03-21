#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
	
	
    Slist * new = malloc(sizeof(Slist*));
    if(new == NULL)
    {
        printf("Memeory not allocated \n");
                return -1;
    }
    new->data = data;
    new->link = NULL;
    if(*head==NULL)
    {
        * head = new;
        return 1;
    }
    else
    {
        new->link = * head;
        * head = new ;
        return 1;
    }
}
