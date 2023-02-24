#include <stdio.h>
#include <math.h>

int main()
{

    const double PI = 3.14159;

    double radius;

    double circumference;

    double area;

    printf("Enter radius:");

    scanf("%lf", &radius);

    circumference = radius * PI * 2;
    area = PI * pow(radius, 2);

    printf("The circumference is %lf \n", circumference);
    printf("The area is %lf", area);

    return 0;
}