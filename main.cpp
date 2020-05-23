///Deci.....mi-am facut cerinta asa:

//La o pizzerie am 2 meniuri, unul cu pizze si unul cu oferte
//O pizza este formata din mai multe ingrediente, iar o oferta este formata din mai multe pizze
//Am clasa Pizza si clasa Oferta
//Se citesc ingredientele disponibile ale pizzeriei si preturile lor
//Se citesc pizzele (numele pizzei si ingredientele din care e formata. Acestea trebuie sa existe in lista initiala de ingrediente)
//Se citesc si ofertele (numele si lista de pizze pt fiecare oferta. Pizzele acestea trebuie sa existe deja in meniu)

//Sa se creeze mai intai meniul de pizza
//Apoi sa se citeasca ofertele si sa se creeze meniul de oferte (ofertele vor contine pizzze existente in meniul 1)
//Clasa Meniu citeste produsele, va cacula preturile lor si le va pune pe toate intr o lista

//Pretul unui produs este suma componentelor din care este format + manopera
//La pizza manopera va fi pe plus, iar la oferta va fi pe minus (discount)


#include <iostream>
#include<fstream>
#include <unordered_map>
#include <vector>
#include<string>

std::vector< std::pair < std::string, float > > ingrediente;    ///toate ingredientele disponibile si preturile lor

#include "Pizza.h"
#include "Meniu.h"

Meniu<Pizza>M1;

#include "Oferta.h"

Meniu<Oferta>M2;

std::ifstream f("date.in");
std::ofstream g("date.out");

int main()
{

    int i,n;
    float val;
    f>>n;

    for(i=0;i<n;i++)
    {
        std::string cuv;
        f>>cuv>>val;
        ingrediente.push_back(make_pair(cuv,val));

    }

    g<<"(Pizza)"<<'\n';
    f>>M1;
    g<<M1;

    g<<'\n';

    g<<"(Oferte)"<<'\n';
    f>>M2;
    g<<M2;

    return 0;
}
