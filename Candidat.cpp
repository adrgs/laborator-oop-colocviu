//
// Created by adragos on 1/10/2020.
//

#include "Candidat.h"
#include <iostream>

std::istream &operator>>(std::istream &in, Candidat *c) {
    in>>c->nume;
    in>>c->tip_ci;
    in>>c->serie_ci;
    in>>c->medie_bac;
    return in;
}

std::ostream &operator<<(std::ostream &out, Candidat *c) {
    out<<c->nume<<"\n";
    out<<c->tip_ci<<"\n";
    out<<c->serie_ci<<"\n";
    out<<c->medie_bac<<"\n";
    return out;
}

Candidat::Candidat() {

}

Candidat::~Candidat() {

}

std::istream &operator>>(std::istream &in, Candidat_prima_facultate &c) {
    Candidat *cp = dynamic_cast<Candidat *>(&c);
    in>>cp;
    in>>c.nota_mate_bac;
    return in;
}

std::ostream &operator<<(std::ostream &out, Candidat_prima_facultate &c) {
    Candidat *cp = dynamic_cast<Candidat *>(&c);
    out<<cp;
    out<<c.nota_mate_bac<<"\n";
    return out;
}

Candidat_prima_facultate::Candidat_prima_facultate() {

}

Candidat_prima_facultate::~Candidat_prima_facultate() {

}

std::istream &operator>>(std::istream &in, Candidat_a_doua_facultate &c) {
    Candidat *cp = static_cast<Candidat *>(&c);
    in>>cp;
    in>>c.medie_absolvire;
    in>>c.program_studii_absolit;
    return in;
}

std::ostream &operator<<(std::ostream &out, Candidat_a_doua_facultate &c) {
    Candidat *cp = static_cast<Candidat *>(&c);
    out<<cp;
    out<<c.medie_absolvire<<"\n";
    out<<c.program_studii_absolit<<"\n";
    return out;
}

Candidat_a_doua_facultate::Candidat_a_doua_facultate() {

}

Candidat_a_doua_facultate::~Candidat_a_doua_facultate() {

}
