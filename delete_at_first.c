#include "sll.h"

int sl_delete_first(Slist **head)
{

 if(*head == NULL)   /* check if head is null  */
    {
      
        return FAILURE;
    }

    Slist *temp = *head;  /* update the head value to temp */
    * head = (*head)->link;    /* update the temparary link to head */
    free(temp);             /* free the temp*/
  
    return SUCCESS;
    
}
