#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{

    char unit;
    printf("Is the temperature in (C) or (F)?");
    scanf("%c", &unit);

    unit = toupper(unit);

    double temp;

    if (unit == 'C')
    {

        double convertedToFarenheit;
        printf("Input temperature in celsius:");
        scanf("%lf", &temp);
        convertedToFarenheit = (temp - 32) * 5 / 9;

        printf("%lf celsius has been converted to %lf fahrenheit", temp, convertedToFarenheit);
    }
    else if (unit == 'F')
    {
        double convertedToCelsius;
        printf("Input temperature in fahrenheit:");
        scanf("%lf", &temp);
        convertedToCelsius = (temp * 1.8) + 32;

        printf("%lf fahrenheit has been converted to %lf celsius", temp, convertedToCelsius);
    }
    else
    {
        printf("Wrong input , not 'C' or 'F' ");
    }
}