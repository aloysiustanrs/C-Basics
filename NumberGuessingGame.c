#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numberGuessed;
    // Generate random number
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;

    do
    {
        printf("Guess a number from 1-100: ");

        scanf("%d", &numberGuessed);

        if (numberGuessed < randomNumber)
        {
            printf("TOO LOW!\n");
        }
        else if (numberGuessed > randomNumber)
        {
            printf("TOO HIGH!\n");
        }
        else
        {

            printf("Correct!");
        }

    } while (numberGuessed != randomNumber);
}