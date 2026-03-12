#pragma once

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    /*
    size will be
    int -> 4 + 4(padding)
    next-> 8
    total ->16 bytes
    */
};
//c++ we dont need to add struct node* next
typedef struct Node Node;

void insert_end(Node **);
void insert_start(Node **);
int insert_pos(Node**, int);
int del_end(Node **);
int del_start(Node **);
int del_pos(Node **,int);
void free_ll(Node *);
void print_ll(Node *);
void reverse_itr(Node **);