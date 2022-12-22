#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c, d, r1, r2, real, imag;
    printf("Enter a, b and c \n");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %f and root2 = %f", r1, r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %f;", r1);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("root1 = %f + %fi and root2 = %f - %fi", real, imag, real, imag);
    }

    return 0;
} 