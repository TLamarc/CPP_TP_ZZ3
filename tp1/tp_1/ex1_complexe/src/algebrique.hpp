#ifndef algebrique__hpp
#define algebrique__hpp

#include "complexe.hpp"


class Polaire;

class Algebrique : public Complexe {
private:
    double re;
    double im;
public:
    Algebrique();
    Algebrique(double r, double i);
    Algebrique(const Polaire& p);
    double getRe() const;
    double getIm() const;
    void setRe(double r);
    void setIm(double i);
    void afficher(std::ostream& flux) const override;
    Algebrique versAlgebrique() const override;
};

#endif