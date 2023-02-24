#include <stdio.h>

int main()
{

    int nums[] = {1,
                  2,
                  3,
                  4};

    printf("Address of nums : %p\n", &nums);

    int *ptrNums = &nums[0];

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        printf("Address in ptrNums at index %d: %p\n", i, ptrNums);
        ptrNums++;
        // Change pointer to point to different elements in the array
    }

    return 0;
}