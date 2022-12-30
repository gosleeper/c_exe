#include <stdio.h>

void int_write(double n) {
    printf("%f\n",n * n);
}

int main() {
    double r;

    printf("r=\n");
    int_write(3);

    return 0;
}
