#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;


class Asunto {
public:
    Asunto();
    int asukasMaara;
    int neliot;
    void maarita(int asukkaat,int neliot);
    double laskeKulutus(double hinta);
};

#endif

