#ifndef MENIU_H_INCLUDED
#define MENIU_H_INCLUDED
#include <vector>
#include "Pizza.h"

template<class T>
class Meniu:T{
    public:
    std::vector <std::pair<T,float> > meniu;

    Meniu()=default;
    ~Meniu()=default;

    friend std::istream& operator >>(std :: istream& in, Meniu& ob)
    {

        int n,i;

        in>>n;  ///numarul de produse (poate sa fie numarul de pizze sau numarul de oferte)
        for(i=0;i<n;i++)
        {
            T produs;
            in>>produs;
            ob.meniu.push_back(std::make_pair(produs,produs.Pret_obiect()));
        }

        return in;
    };

    friend std::ostream& operator <<(std :: ostream & out, Meniu const& ob)
    {
        out<<"Meniu:"<<'\n';
        for(int i=0;i<ob.meniu.size();i++)
            out<<i+1<<"."<<ob.meniu[i].first<<'\n'<<"Pret:"<<ob.meniu[i].second<<" lei"<<'\n';
    };
};

#endif // MENIU_H_INCLUDED
