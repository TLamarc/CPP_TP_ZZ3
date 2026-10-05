#ifndef complexe__hpp
#define complexe__hpp

#include <iostream>

class Algebrique;

class Complexe{
public:
    Complexe() = default;
    virtual void afficher(std::ostream& flux) const = 0;
    virtual Algebrique versAlgebrique() const = 0;

};
std::ostream& operator<<(std::ostream& flux, const Complexe& c);
#endif
