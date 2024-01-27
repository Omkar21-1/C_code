#include <stdio.h>
#include <math.h>

double customPow(double base, double exponent) {
    return exp(exponent * log(base));
}

int main() {
    double base = 0.5;
    double exponent = 2147395600;

    double result = customPow(base, exponent);

    printf("%lf^%lf = %lf\n", base, exponent, result);

    return 0;
}
