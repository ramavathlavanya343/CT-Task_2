#include "sll.h"

int find_node(Slist *head, data_t data)
{
	
    int count =0; /*initialize a count is 0*/
    if(head == NULL) /*check head is null */
    {
        printf("List is empty ");
        return -1;
    }

    Slist * temp = head;  /* update the head into temp */

    while(temp)  /* traverse the loop */
    {
        count++; /* when we find the data increment the count */
        if(temp->data == data) /* check the temp data is equal to find data */
        {
            printf("Data found\n");
            return count ;
        }
        temp=temp->link;  /* update the temp link into temp */
    }

    printf("Data not found\n");
    return -1;
}

