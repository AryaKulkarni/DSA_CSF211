#include <stdio.h>
#include <stdlib.h>

void insertInOrder(int key, int a[], int pos)
{
    int k = pos - 1;
    int i = 0;
    while (k >= 0 && key < a[k])
    {
        a[k + 1] = a[k];
        k--;
    }
    a[k + 1] = key;
}

void insertionsort(int a[], int len)
{
    for (int i = 1; i < len; i++)
    {
        insertInOrder(a[i], a, i);
    }
}

void insertionsortRec(int a[], int len)
{   if(len>1)
    {
        insertionsortRec(a, len - 1);
        insertInOrder(a[len - 1], a, len - 1);
    }
}

int main()
{
    int a[] = {5, 6, 1, 2, 3};
    insertionsortRec(a, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
}