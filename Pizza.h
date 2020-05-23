#ifndef PIZZA_H_INCLUDED
#define PIZZA_H_INCLUDED

#include <iostream>
#include<fstream>
#include <unordered_map>
#include <vector>
#include<string>


//std::ifstream f("date.in");
//std::ofstream g("date.out");


class Pizza{  //o pizza e formata din mai multe ingrediente
    protected:
    static constexpr float manopera=10;//m-a obligat compilatorul sa pun constexpr
    std::vector < std::pair < std::string,float > > componente;    ///ingredientele din care e formata si preturile lor

    public:

    std::string nume;   //am nevoie de el public sa il pot vedea in oferta

    Pizza()=default;
    ~Pizza()=default;

    int Pret_obiect();

    friend std::istream& operator >>(std :: istream& in, Pizza& ob);

    friend std::ostream& operator <<(std :: ostream & out, Pizza const& ob);

    friend bool operator ==(Pizza &ob1,Pizza &ob2); //pe asta sincer cred ca am facut i degeaba
};

#endif // NRMARE_H_INCLUDED
