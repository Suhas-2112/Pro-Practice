#include "reverse_ll.h"

void reverse_itr(Node **head)
{
    Node *cur,*pre,*nex;

    pre = NULL;
    cur = *head;
    nex = *head;

    while(cur != NULL)
    {
        nex = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nex;
    }
    *head = pre;
}