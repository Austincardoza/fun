#include <math.h>
#include <stdio.h>
int main() {
     double a,b,c,wholeroot, root1, root2, realPart, imagPart;
    printf("Enter values of a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    wholeroot = b * b - 4 * a * c;

    // if diff and real
    if (wholeroot > 0) {
        root1 = (-b + sqrt(wholeroot)) / (2 * a);
        root2 = (-b - sqrt(wholeroot)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // if real and equal 
    else if (wholeroot == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if imaginary

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-wholeroot) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 