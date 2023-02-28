#include <stdio.h>

void increment(int *ptr)
{

    *ptr += 1;
}

int main()
{

    int num = 3;

    int *ptrNum = &num;

    increment(ptrNum);

    printf("%d", num);
}