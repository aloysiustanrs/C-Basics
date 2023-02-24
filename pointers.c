#include <stdio.h>

int main()
{

    int num = 3;
    int *ptrNum = &num;
    // ptrNum is a pointer which value is address of num

    printf("%p\n", &num);
    // print address of num
    printf("%p\n", ptrNum);
    // print value of ptrNum = address of num

    return 0;
}