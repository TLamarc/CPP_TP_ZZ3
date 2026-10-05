#include <vector>
#include <iostream>

#include "algebrique.hpp"
#include "polaire.hpp"

int main() {

    Algebrique a(12, 24);
    Polaire p(5, 1.2);

    std::vector<Complexe*> v;

    v.push_back(&a);
    v.push_back(&p);

    for (Complexe* c : v) {
        std::cout << *c << std::endl;
    }

    return 0;
}