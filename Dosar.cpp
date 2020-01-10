//
// Created by adragos on 1/10/2020.
//

#include "Dosar.h"

double Dosar_a_doua_facultate::GetMedieAdmitere() {
    return 0.6*this->nota_proba + 0.4*this->medie_absolvire;
}

std::string Dosar_a_doua_facultate::GetLegitimatie() {
    std::string rez =  "";
    if (this->ID) {
        rez = "ID2_";
    } else {
        rez = "IF2_";
    }
    rez += std::to_string(this->numar_inregistrare);

    return rez;
}

double Dosar_ID::GetMedieAdmitere() {
    return 0.8*this->nota_proba + 0.2*this->medie_bac;
}

std::string Dosar_ID::GetLegitimatie() {
    return std::to_string(this->numar_inregistrare);
}

double Dosar_IF::GetMedieAdmitere() {
    return 0.6*this->nota_proba + 0.4*this->nota_mate_bac;
}

std::string Dosar_IF::GetLegitimatie() {
    std::string rez = "ID_";
    rez += std::to_string(this->numar_inregistrare);
    return rez;
}
