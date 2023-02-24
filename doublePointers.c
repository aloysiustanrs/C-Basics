#include <stdio.h>
void main()
{
    int a = 10;
    int *p;
    int **pp;
    p = &a;                           // pointer p is pointing to the address of a
    pp = &p;                          // pointer pp is a double pointer pointing to the address of pointer p
    printf("address of a: %p\n", p);  // Address of a will be printed
    printf("address of p: %p\n", pp); // Address of p will be printed

    printf("address of pp: %p\n", &pp);
    printf("value stored at p: %d\n", *p);   // value stoted at the address contained by p i.e. 10 will be printed
    printf("value stored at pp: %d\n", *pp); // value stored at the address contained by the pointer stoyred at pp

    printf("address of p from pp: %p\n", pp);   // address of p
    printf("address of p from pp: %p\n", &*pp); // address of p

    printf("address of a from pp: %p\n", *&*pp); // address of a
    printf("address of a from pp: %p\n", *pp);   // address of a

    printf("value of a from pp: %d\n", **&*pp); // address of a
    printf("value of a from pp: %d\n", **pp);   // address of a
}
