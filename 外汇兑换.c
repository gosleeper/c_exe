#include <stdio.h>

int main() {
    double a, b, c, x, y;

    scanf("%lf %lf %lf\n",&a,&b,&c);
    scanf("%lf\n%lf",&x,&y);

    printf("%.2f %.2f %.2f\n",x /100*a, x/100*b, x/100*c);
    printf("%.2f %.2f %.2f\n",y/a*100, y/b*100, y/c*100);

    return 0;

}
