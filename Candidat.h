//
// Created by adragos on 1/10/2020.
//

#ifndef LABORATOR_CANDIDAT_H
#define LABORATOR_CANDIDAT_H

#include <vector>
#include <string>
#include "Dosar.h"

class Candidat {
    std::vector<Dosar*> dosare;
    std::string nume;
    std::string tip_ci;
    std::string serie_ci;

    double medie_bac;
public:
    Candidat();
    virtual ~Candidat();

    friend std::istream& operator>>(std::istream& in, Candidat*c);
    friend std::ostream& operator<<(std::ostream& out, Candidat*c);
};

class Candidat_prima_facultate: public Candidat {
    double nota_mate_bac;
public:
    Candidat_prima_facultate();
    ~Candidat_prima_facultate();

    friend std::istream& operator>>(std::istream& in, Candidat_prima_facultate&c);
    friend std::ostream& operator<<(std::ostream& out, Candidat_prima_facultate&c);
};

class Candidat_a_doua_facultate: public Candidat {
    double medie_absolvire;
    std::string program_studii_absolit;

public:
    Candidat_a_doua_facultate();
    ~Candidat_a_doua_facultate();
    friend std::istream& operator>>(std::istream& in, Candidat_a_doua_facultate&c);
    friend std::ostream& operator<<(std::ostream& out, Candidat_a_doua_facultate&c);
};


#endif //LABORATOR_CANDIDAT_H
