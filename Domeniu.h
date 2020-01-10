//
// Created by adragos on 1/10/2020.
//

#ifndef LABORATOR_DOMENIU_H
#define LABORATOR_DOMENIU_H

#include <string>
#include <vector>
#include "Dosar.h"
#include "Candidat.h"

class Domeniu {
private:
    std::string nume;
    int nr_locuri_ID;
    int nr_locuri_IF;
    double procent_locuri_taxa_a_doua_facultate;

    int nr_candidati_inscrisi;

    std::vector<Dosar *> dosare;

public:

    Domeniu(std::string nume, int nr_locuri_ID, int nr_locuri_IF, double procent) : nume(nume), nr_locuri_ID(nr_locuri_ID), nr_locuri_IF(nr_locuri_IF), procent_locuri_taxa_a_doua_facultate(procent) {};

    void AdaugaDosarCandidat(Candidat* candidat, bool frecventa);
};


#endif //LABORATOR_DOMENIU_H
