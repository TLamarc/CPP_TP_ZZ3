#ifndef polaire__hpp
#define polaire__hpp

#include "complexe.hpp"

class Algebrique;

class Polaire : public Complexe {
private:
    double mod;
    double arg;
public:
    Polaire();
    Polaire(double mod, double arg);
    Polaire(const Algebrique& z);
    double getMod() const;
    double getArg() const;
    void setMod(double m);
    void setArg(double a);
    void afficher(std::ostream& flux) const override;
    Algebrique versAlgebrique() const override;

};

#endif