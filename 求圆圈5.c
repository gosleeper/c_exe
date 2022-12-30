#include <stdio.h>

int main() {
    double r;

    scanf("%lf",&r);

    double Area = 3.14 * r * r;
    double Perimeter = 2 * 3.14  * r;

    printf("Area: %f\n"
           "Perimeter: %f\n",Area,Perimeter);
}
