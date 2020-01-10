#include <iostream>
#include <vector>
#include "Facultate.h"

using namespace std;


int main() {

    Facultate *unibuc = new Facultate("Universitatea din Bucuresti");

    unibuc->AdaugaDomeniu("CTI", 90, 10, 0.1);
    vector<Candidat *> candidati;

    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        Candidat *candidat;

        int tip;
        cin>>tip;

        if (tip == 0)
        {
            Candidat_prima_facultate *c = new Candidat_prima_facultate;
            cin>>*c;
            candidat = c;
        } else {
            Candidat_a_doua_facultate *c = new Candidat_a_doua_facultate;
            cin>>*c;
            candidat = c;
        }

        candidati.push_back(candidat);

        //unibuc->AdaugaDosar(candidat, "CTI");

    }

    for (int i=0;i<n;i++)
    {
        Candidat_prima_facultate *cp = dynamic_cast<Candidat_prima_facultate*>(candidati[i]);
        if (cp) {
            cout<<*cp;
        }
        Candidat_a_doua_facultate *cad = dynamic_cast<Candidat_a_doua_facultate*>(candidati[i]);
        if (cad) {
            cout<<*cad;
        }
    }

    return 0;
}
