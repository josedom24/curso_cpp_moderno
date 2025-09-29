#include "math_utils.h"

int square(int x) {
    return x * x;
}

bool is_even(int x) {
    return x % 2 == 0;
}

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
