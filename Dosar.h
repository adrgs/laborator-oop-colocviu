//
// Created by adragos on 1/10/2020.
//

#ifndef LABORATOR_DOSAR_H
#define LABORATOR_DOSAR_H

#include <string>

class Dosar {
protected:
    std::string nume;
    double medie_bac;
    double nota_proba;
    int numar_inregistrare;

    bool IF;
    bool ID;

public:
    virtual double GetMedieAdmitere() = 0;
    virtual std::string GetLegitimatie() = 0;
    double SetNotaProba(double nota) {
        nota_proba = nota;
    }

    Dosar(int numar_inregistrare, double medie_bac, std::string nume):numar_inregistrare(numar_inregistrare),medie_bac(medie_bac),nume(nume), IF(false), ID(false), nota_proba(0) {    };
    ~Dosar();
};

class Dosar_ID : public Dosar {
public:
    Dosar_ID(int numar_inregistrare, double medie_bac, std::string nume) : Dosar(numar_inregistrare, medie_bac, nume){
        this->ID = true;
    }
    ~Dosar_ID();

    double GetMedieAdmitere() override;
    std::string GetLegitimatie() override;
};

class Dosar_IF : public Dosar {
private:
    double nota_mate_bac;
public:
    Dosar_IF(int numar_inregistrare, double medie_bac, std::string nume, double nota_mate_bac) : Dosar(numar_inregistrare, medie_bac, nume) {
        this->nota_mate_bac = nota_mate_bac;
        this->IF = true;
    };
    ~Dosar_IF();

    double GetMedieAdmitere() override;
    std::string GetLegitimatie() override;
};

class Dosar_a_doua_facultate : public Dosar {
private:
    std::string program_studii_absolvit;
    double medie_absolvire;

public:
    Dosar_a_doua_facultate(int numar_inregistrare, double medie_bac, std::string nume, double nota_mate_bac, std::string program_studii_absolit, double medie_absolvire, bool frecventa) : Dosar(numar_inregistrare, medie_bac, nume) {
        this->program_studii_absolvit = program_studii_absolit;
        this->medie_absolvire = medie_absolvire;
        if (frecventa == true) {
            this->IF = true;
        } else {
            this->ID = true;
        }
    }
    double GetMedieAdmitere() override;
    std::string GetLegitimatie() override;
};


#endif //LABORATOR_DOSAR_H
