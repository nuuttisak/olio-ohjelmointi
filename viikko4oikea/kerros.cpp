#include "kerros.h"

Kerros::Kerros()
{
    cout << " kerros luotu "<< endl;
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;

}
void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja"<< endl;
    as1->maarita(2, 100);
    as2->maarita(2,100);
    as3->maarita(2, 100);
    as4->maarita(2,100);
}

double Kerros::laskeKulutus(double hinta)
{
    int kulutus = 0;
    kulutus += as1->laskeKulutus(hinta);
    kulutus += as2->laskeKulutus(hinta);
    kulutus += as3->laskeKulutus(hinta);
    kulutus += as4->laskeKulutus(hinta);

    return kulutus;
}
