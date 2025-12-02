#include <stdio.h>


typedef struct Node
{
    int data;
    struct Node*next;
}Node;

Node* head;

void insert(int a)
{
    Node* tmp = (Node*)malloc(sizeof(Node));
    tmp->data = a;
    tmp->next = NULL;
    if(head == NULL)
    {

    }
}
int main()
{
    head = NULL;
   
    return 0;
}