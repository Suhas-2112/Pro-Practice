#include <iostream>
#include <cstdlib>

using namespace std;
struct Node
{
    int data;
    struct Node* next;
    /*
    size will be
    4 +4
    8
    16 bytes
    */
};
//c++ we dont need to add struct node* next

Node* head = nullptr;

void Create_Node(void)
{
    Node*t = head;
    Node* tmp = (Node*)malloc(sizeof(Node));
    std::cout<<"Enter data: \n";
    std::cin>>tmp->data;
    tmp->next = nullptr;
    if(head == nullptr)
    {
        head = tmp;
    }
    else
    {
        while(t->next !=nullptr)
        {
            t = t->next;
        }
        t->next = tmp;
    }
}

void free_ll(void)
{
    Node* tmp;
    while(head != nullptr)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
void print_ll(void)
{
    Node* tmp = head;
    while(tmp !=nullptr)
    {
        cout<<tmp->data<<"->";
        tmp = tmp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{
    for(int i =0;i<5;i++)
    {
        Create_Node();
    }
    print_ll();
    free_ll();
}