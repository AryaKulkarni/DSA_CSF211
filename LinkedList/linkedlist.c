#include <stdio.h>
#include<stdlib.h>

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
    LIST myList;
    myList = (LIST) malloc(sizeof(struct linked_list));
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
    LIST l = createList();

    for(int i=0;i<5;i++) {
        NODE n=createNode(i);
        insertFirst(l,n);
    }

    NODE temp=l->head;
    NODE temp2=l->head;

    while(temp->next!=NULL) {
        temp=temp->next;
    }

    while(temp)

    return 0;
}