#include "sll.h"

int sl_delete_list(Slist **head)
{
	
	 if(*head==NULL)  /* check if head is null */
    {
      //  printf(" INFO : Delete list failure\n");
       // printf("List is empty\n"); /* print list empty */
        return FAILURE;
    }
    
    else
    {
        

    Slist * temp =*head; 
   // Slist * prev ;

    while(temp->link != NULL) /* traverse the loop upto null */
    {
        *head=temp->link;    /* update the head value into temp */
        free(temp);
        temp=*head;    //update the head to temp
    }
    
    *head=temp->link;   /* update the link to temp head*/
    free(temp);
    temp=NULL;
    return SUCCESS;
    }

}
