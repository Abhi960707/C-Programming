#include<stdio.h>
#define PI 3.14159
int main()
{
    float radius,height,surface_area,volume;

printf("enter the radius of circle:");
scanf("%f",&radius);

printf("enter the height of cylinder:");
scanf("%f",&height);

surface_area = 2 * PI * radius * radius + 2 * PI *radius*height;
    
    volume = PI * radius * radius * height;

    printf("surface area the cylinder : %.2f\n",surface_area);
 printf("volume of the cylinder :%.2f\n",volume);
 
return 0;
}