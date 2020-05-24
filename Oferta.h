#ifndef OFERTA_H_INCLUDED
#define OFERTA_H_INCLUDED

class Oferta:Pizza{  //o Oferta e formata din mai multe pizze
    protected:
    static constexpr float manopera=-3;//m-a obligat compilatorul sa pun constexpr
    std::string nume;
    std::vector < std::pair < Pizza,float > > componente;    ///ingredientele din care e formata si preturile lor

    public:

    Oferta()=default;
    ~Oferta()=default;

    int Pret_obiect();

    friend std::istream& operator >>(std :: istream& in, Oferta& ob);
    friend std::ostream& operator <<(std :: ostream & out, Oferta const& ob);
};


#endif // OFERTA_H_INCLUDED
