#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include <string>
#include "chef.h"

using namespace std;



class ItalianChef: public Chef {
private:
    int vedenMaara;
    int jauhojenMaara;

public:

    ItalianChef(string chefName, int vesi, int jauhot);

    ~ItalianChef();

    void makeSalad();
    void makeSoup();
    void makePasta();
    string getName();

};

#endif
