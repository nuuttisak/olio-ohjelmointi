#include <iostream>
#include "italianchef.h"
using namespace std;

ItalianChef::ItalianChef(string chefName, int vesi, int jauhot) : Chef(chefName), vedenMaara (vesi), jauhojenMaara(jauhot){}
ItalianChef::~ItalianChef(){}

void ItalianChef::makeSalad(){
        cout << "Chef "<< name << " makes salad " << endl;
    }

void ItalianChef::makeSoup(){
        cout << "Chef "<< name << " makes soup " << endl;
    }

void ItalianChef::makePasta(){
        cout << " Chef " << name << " makes pasta with special recipe" << endl;
        cout << " Chef " << name << " uses jauhot =  "<< jauhojenMaara << endl;
        cout << " Chef " << name << " uses vesi = " << vedenMaara << endl;
}
    string ItalianChef::getName(){
        return name;
    };
