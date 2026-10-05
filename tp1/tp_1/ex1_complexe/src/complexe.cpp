#include "complexe.hpp"

std::ostream& operator<<(std::ostream& flux, const Complexe& c){
    c.afficher(flux);
    return flux;
}

