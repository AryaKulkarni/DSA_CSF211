#include <stdio.h>

typedef struct stack *STACK;
typedef struct node *NODE;

struct node
{
    int ele;
    NODE next;
};

struct stack
{
    int count;
    NODE top;
};

STACK createStack() {
    STACK st;
    s.top=NULL;
    s.count=0;
    return s;
}

STACK push(int value, STACK st) {
    st->top = (NODE)malloc(sizeof(NODE));

}

int main() {
    return 0;
}