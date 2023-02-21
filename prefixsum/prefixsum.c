#include <stdio.h>
#include <stdlib.h>


void prefixsum(int *a)
{
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum+=*(a+i);
        *(a+i)=sum;
    }
}

int main()
{
    int *a = (int*)malloc(10*sizeof(int));
    printf("Enter 10 elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (a+i));
    }
    prefixsum(a);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *(a+i));
    }
    free(a);
}