#include <stdio.h>
 
int main()
{
    float radius, area,circumference;
 
    printf("Enter the radius of a circle ");
    scanf("%f", &radius);
    area = (3.14*(radius*radius));
    circumference =2 * 3.14 *radius;

    printf("Area of a circle = %.2f\n", area);
    printf("circumference of the circle:.%.2f\n",circumference);

    return 0;

}