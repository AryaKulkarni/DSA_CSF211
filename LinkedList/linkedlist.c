#include <stdio.h>

typedef struct linked_list *LIST;
typedef struct node *NODE;

struct node
{
    int ele;
    NODE next;
};

struct linked_list
{
    int count;
    NODE head;
};

LIST createList()
{
    LIST myList = (LIST)malloc(sizeof(*myList));
    myList->count = 0;
    myList->head = NULL;
    return myList;
}

NODE createNode(int value)
{
    NODE newNode = (NODE)malloc(sizeof(*newNode));
    newNode->ele = value;
    newNode->next = NULL;
    return newNode;
}

void insertFirst(LIST l, NODE n)
{
    if (l->count == 0)
    {
        l->head = n;
        n->next = NULL;
        l->count++;
    }
    else
    {
        n->next = l->head;
        l->head = n;
        l->count++;
    }
}
// O(1)

void insertLast(LIST l, NODE n)
{
    if (l->count == 0)
    {
        l->head = n;
        n->next = NULL;
        l->count++;
    }
    else
    {
        NODE temp = l->head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = NULL;
        l->count++;
    }
}
//O(n)

void removeFirst(LIST l) {
    l->head=l->head->next;
    l->count--;
}
//O(1)

void removeLast(LIST l) {
    NODE temp=l->head;
    NODE prev=NULL;

    while(temp->next!=NULL) {
        temp=temp->next;
        prev=temp;
    }
    prev->next=NULL;
    l->count--;
    free(temp);
}
//O(n)

int main()
{
    return 0;
}