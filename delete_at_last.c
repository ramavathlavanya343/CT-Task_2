#include "sll.h"

int sl_delete_last(Slist **head)
{


    if(*head == NULL) /*check head is null */
    {
        
        return FAILURE;
    }


   else if((*head)->link== NULL) /*check head link is null*/
    {
        free(*head);  /* free the head */
        *head = NULL;  /*update the null value to head*/
        return SUCCESS;
    }
    else
    {

    Slist *temp = *head;  /* initialize temparary varaiable and store in head value*/
    Slist  *prev=NULL;

    while(temp->link != NULL)  /* traverse the loop temp link and new link is not equalt to null*/
    {
        prev=temp;;  /* update the temp to the prev */
        temp=temp->link;
    }
    if(prev !=NULL)
    {
        prev->link=NULL;
    }
    else
    {
        *head = NULL;
    }
    free(temp);
    return SUCCESS;
    }
    
}
