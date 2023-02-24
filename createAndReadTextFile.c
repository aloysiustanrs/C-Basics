#include <stdio.h>

int main()
{

    FILE *fptr;

    fptr = fopen("example.txt", "w");

    // Write some text to the file
    fprintf(fptr, "LMAOOOOOOOOOOOOOOOOOOOOOO");

    // Close the file
    fclose(fptr);

    // Open a file in read mode
    fptr = fopen("example.txt", "r");

    // Store the content of the file
    char myString[100];

    // Read the content and print it
    while (fgets(myString, 100, fptr))
    {
        printf("%s", myString);
    }

    // Close the file
    fclose(fptr);
    return 0;
}
