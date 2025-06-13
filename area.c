#include <stdio.h>
 
int main()
{
    float radius, area;
 
    printf("Enter the radius of a circle ");
    scanf("%f", &radius);
    area = (3.14*(radius*radius));


    printf("Area of a circle = %.2f\n", area);
   

    return 0;

}