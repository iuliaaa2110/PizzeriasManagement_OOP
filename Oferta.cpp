#include "Pizza.h"
#include "Meniu.h"
#include "Oferta.h"

int Oferta::Pret_obiect(){

        float suma=manopera;

        for(int j=0;j<this->componente.size();j++)
            suma+=this->componente[j].second;
        return suma;
    }

std::istream& operator >>(std :: istream& in, Oferta& ob)
    {
        int n;//nr de ingrediente

        in>>ob.nume>>n;

        extern Meniu<Pizza>M1;  ///Meniul cu pizza

        for(int i=0;i<n;i++)
        {
            std::string nume_pizza;
            in>>nume_pizza; ///citesc mai multe pizze, dar doar numele lor, nu obiectele

            bool ok=0;

            for(int j=0;j<M1.meniu.size();j++)   //caut in Meniu daca exista pizza respectiva
            {
                if(nume_pizza==M1.meniu[j].first.nume)
                {
                    ok=1;
                    ob.componente.push_back(std::make_pair(M1.meniu[j].first,M1.meniu[j].second));  //pretul Pizzei
                }
            }

            if(ok==0)
                std::cout<<"incerci sa adaugi la oferta o pizza care nu exista in meniu!";
        }

        return in;

    }

    std::ostream& operator <<(std :: ostream & out, Oferta const& ob)
    {
         out<<ob.nume<<"- ";

         for(int i=0;i<ob.componente.size();i++)
            out<<ob.componente[i].first<<" ";

         return out;
    }
