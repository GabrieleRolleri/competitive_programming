#include <iostream>

int GCD(int, int, int *, int *);

int main() {
    int a = 60, b = 384, x, y, g = GCD(a, b, &x, &y);
    std::cout << x << " * " << a << " + " << y << " * " << b << " = " << g << std::endl;
    return 0;
}

int GCD(int a, int b, int *x, int *y) {
    int t;
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }
    int g = GCD(b, a % b, x, y);
    t = *x;
    *x = *y;
    *y = t - (*y) * (a / b);
    return g;
}