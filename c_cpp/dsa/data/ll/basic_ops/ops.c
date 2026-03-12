#include "ll.h"
int main()
{
    Node* head = NULL;
    for(int i =0;i<5;i++)
    {
        insert_end(&head);
    }
    print_ll(head);
    
    //printf("deleted -%d\n",del_pos(&head,6));
    //print_ll(head);
    /*
    if(insert_pos(&head,0)==-1)
    {
        printf("Out of bound - 0\n");
    }
    print_ll(head);
    if(insert_pos(&head,1)==-1)
    {
        printf("Out of bound - 1\n");
    }
    print_ll(head);
    if(insert_pos(&head,2)==-1)
    {
        printf("Out of bound - 2\n");
    }
    print_ll(head);
    if(insert_pos(&head,3)==-1)
    {
        printf("Out of bound - 3\n");
    }
    print_ll(head);
    if(insert_pos(&head,4)==-1)
    {
        printf("Out of bound - 4\n");
    }
    print_ll(head);
    if(insert_pos(&head,5)==-1)
    {
        printf("Out of bound - 5\n");
    }
    print_ll(head);
    if(insert_pos(&head,100)==-1)
    {
        printf("Out of bound - 100\n");
    }
    print_ll(head);
    */
    /*
    Node* head2 = NULL;
    if(insert_pos(&head2,1)==-1)
    {
        printf("Out of bound - 5\n");
    }
        
    print_ll(head2);
    free_ll(head2);
    */
    
    /*
    Node* head2 = NULL;
    for(int i =0;i<5;i++)
    {
        insert_start(&head2);
    }
    print_ll(head2);
    free_ll(head2);
    */

    reverse_itr(&head);
    print_ll(head);
    free_ll(head);
    return 0;
}