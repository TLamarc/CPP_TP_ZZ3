
#include "polaire.hpp"
#include "algebrique.hpp"
#include <cmath>

Polaire::Polaire() : mod(0), arg(0){}
Polaire::Polaire(double m, double a) : mod(m), arg(a){}
Polaire::Polaire(const Algebrique& z) {
    mod = std::hypot(z.getRe(), z.getIm());
    //mod = std::sqrt(z.getRe()*z.getRe() + z.getIm()*z.getIm());
    arg = std::atan2(z.getIm(), z.getRe());
}

double Polaire::getMod() const{
    return mod;
}

double Polaire::getArg() const {
    return arg;
}

void Polaire::setMod(double m) {
    mod = m;
}

void Polaire::setArg(double a) {
    arg = a;
}

void Polaire::afficher(std::ostream& flux) const {
    flux << "(mod=" << mod << ";" << "arg=" << arg << ")" ;
}

Algebrique Polaire::versAlgebrique() const{
    return Algebrique(getMod() * std::cos(getArg()), 
    getMod() * std::sin(getArg()));
}
