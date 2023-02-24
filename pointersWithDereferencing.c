#include <stdio.h>

int main()
{

    int num = 3;
    int *ptrNum = &num;
    // Declare pointer and set as address of num

    printf("Value of num : %d\n", num);
    printf("Value of num ptrNum is pointing to : %d\n", *ptrNum);
    // dereference pointer to get the value of num

    printf("Address of num : %p\n", &num);
    printf("Address in ptrNum : %p\n", ptrNum);
    // Both as as , address of num = ptrNum( pointing to address of num )

    return 0;
}