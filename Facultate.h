//
// Created by adragos on 1/10/2020.
//

#ifndef LABORATOR_FACULTATE_H
#define LABORATOR_FACULTATE_H

#include <string>
#include <vector>
#include "Domeniu.h"

class Facultate {
private:
    std::string nume;
    std::vector<Domeniu*> domenii;

public:
    Facultate(std::string nume) : nume(nume) {}
    void AdaugaDomeniu(std::string nume, int nr_locuri_ID, int nr_locuri_IF, double procent) {
        domenii.push_back(new Domeniu(nume, nr_locuri_ID, nr_locuri_IF, procent));
    }

    void AdaugaDosar(Candidat *c, std::string nume);
};


#endif //LABORATOR_FACULTATE_H
