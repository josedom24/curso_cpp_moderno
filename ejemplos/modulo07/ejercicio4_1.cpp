#include <iostream>
#include <vector>
#include <list>
#include <string>

template <typename Container>
void print_container(const Container& cont) {
    for (const auto& elem : cont) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}
int main() {
    std::vector<int> v = {1, 2, 3};
    std::list<std::string> l = {"uno", "dos", "tres"};

    print_container(v); // Imprime: 1 2 3
    print_container(l); // Imprime: uno dos tres
}
