#include <iostream>

void incrementar(int x) {
    std::cout << x << '\n';
    x = x + 1;
}

int main() {
    int a = 5;
    incrementar(a);
    // a sigue valiendo 5
    std::cout << a;
    return 0;
}
