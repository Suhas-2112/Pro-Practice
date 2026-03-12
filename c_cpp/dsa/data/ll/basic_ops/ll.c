#include "ll.h"

void insert_end(Node **head)
{
    Node *t = *head;
    //create a node

    Node *tmp = (Node*)malloc(sizeof(Node));

    printf("Enter a number\n");
    scanf("%d",&(tmp->data));
    
    tmp->next = NULL;

    if(*head == NULL)
    {
        *head = tmp;
    }
    else
    {
        while(t->next !=NULL)
        {
            t = t->next;
        }
        t->next = tmp;
    }
}

void insert_start(Node **head)
{
    Node *tmp = (Node*)malloc(sizeof(Node));

    printf("Enter a number\n");
    scanf("%d",&(tmp->data));
    
    tmp->next = *head;

    *head = tmp;    
}

int insert_pos(Node** head, int pos)
{
    if(pos<1)return -1;

    

    if(pos == 1)
    {
        Node *tmp = (Node*)malloc(sizeof(Node));

        printf("Enter a number\n");
        scanf("%d",&(tmp->data));
        
        tmp->next = *head;
        *head = tmp;
        return 0;
    }
    
        Node* t = *head;
        // pos = 3
        // need it to iterate 3-1 times
        //0 to pos-1
        //1 2 3 pos = 1
        
        
        //1 2 3 pos = 2
        //iterate till pos -1
        //1 2 3 pos = 3
        
        for(int i=1;i<pos-1 && NULL != t;i++)
        {
            t = t->next;
        }
        if(NULL == t)
        {
            return -1;
        }
        
        /*
        //1 2 3 pos = 4
        //iterate 1 to 3
        if(t->next == NULL)
        {
            t->next = tmp;
            return 0;
        }
        //any where in between
        */
        Node *tmp = (Node*)malloc(sizeof(Node));

        printf("Enter a number\n");
        scanf("%d",&(tmp->data));
        tmp->next = NULL;
        tmp->next = t->next;
        
        t->next = tmp;

        return 0;
        //5 6 10 20 30 pos = 3

    
}

int del_end(Node **head)
{
    if(*head == NULL)
    {
        return -1;
    }

    Node *tmp = *head;
    Node* prev = NULL;
    while(tmp->next != NULL)
    {
        prev = tmp;
        tmp= tmp->next;
    }
    int del = tmp->data;
    if(prev == NULL)
    {
        *head = NULL;
    }
    else
    {
        prev->next = NULL;
    }

    free(tmp);
    return del;
}
int del_start(Node **head)
{
    if(*head == NULL)
    {
        return -1;
    }
    Node *tmp = *head;
    int deleted_data = tmp->data;
    (*head) = (*head)->next;
    free(tmp);
    return deleted_data;
}
int del_pos(Node **head,int pos)
{
    if(*head == NULL || pos<1)
    {
        return -1;
    }

    Node *tmp = *head;

    if(pos ==1)
    {
        int td = tmp->data;
        *head = (*head)->next;
        free(tmp);
        return td;
    }
    for(int i=1;i<pos-1 && tmp->next != NULL;i++)
    {
        tmp = tmp->next;
    }
    if(tmp->next == NULL)
    {
        printf("Our of Bound\n");
        return -1;
    }
    int td = tmp->next->data;
    Node* del = tmp->next;
    tmp->next = del->next;
    free(del);
    return td;
}
void free_ll(Node *head)
{
    Node* tmp;
    while(head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
void print_ll(Node *head)
{
    Node* tmp = head;
    while(tmp !=NULL)
    {
        printf("%d ->",tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}
