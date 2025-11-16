#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* next;
};
typedef struct Node Node;

Node* head = NULL;

void createNode(int data)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = date;
    new_node->next = NULL;
    
}

int main()
{

}