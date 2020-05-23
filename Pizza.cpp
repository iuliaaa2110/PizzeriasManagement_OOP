#include "Pizza.h"

int Pizza::Pret_obiect(){
        float suma=manopera;

        for(int j=0;j<this->componente.size();j++)
            suma+=this->componente[j].second;
        return suma;
    }

std::istream& operator >>(std :: istream& in, Pizza& ob)
    {
        int n;//nr de ingrediente

        in>>ob.nume>>n;
        extern std::vector< std::pair < std::string, float > > ingrediente;    ///toate ingredientele disponibile si preturile lor

        for(int i=0;i<n;i++)
        {
            std::string x;
            in>>x;

            bool ok=0;

            for(int j=0;j<ingrediente.size();j++)   //caut in vectorul global de ingrediente sa aflu pretul
            {
                if(x==ingrediente[j].first)
                {
                    ok=1;
                    ob.componente.push_back(make_pair(x,ingrediente[j].second));  //pretul ingredientului
                }
            }

            if(ok==0)
                std::cout<<x<<'\n'<<"Incerci sa folosesti un ingredient pe care pizzeria nu il are!";
        }

        return in;

    }

std::ostream& operator <<(std :: ostream & out, Pizza const& ob)
    {
         out<<ob.nume<<"- ";

         for(int i=0;i<ob.componente.size();i++)
            out<<ob.componente[i].first<<" ";

         return out;
    }

bool operator ==(Pizza &ob1,Pizza &ob2)
    {
        if(ob1.nume!=ob2.nume)
            return false;

        if(ob1.componente.size()!=ob2.componente.size())
            return false;

        for(int i=0;i<ob2.componente.size();i++)
            if(ob1.componente[i]!=ob2.componente[i])
                return false;
        return true;
    }
