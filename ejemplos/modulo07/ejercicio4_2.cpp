#include <iostream>
#include <vector>

template <typename Container>
void print_container(const Container& cont) {
    for (const auto& elem : cont) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}

template <typename Container, typename Function>
void apply_to_all(Container& cont, Function f) {
    for (auto& elem : cont) {
        f(elem);
    }
}
int main() {
    std::vector<int> v = {1, 2, 3, 4};
    apply_to_all(v, [](int& x) { x *= 2; });
    print_container(v); // Imprime: 2 4 6 8

}
