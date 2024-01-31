#include <iostream>
#include "chef.h"
#include "italianchef.h"


using namespace std;

int main() {
        Chef gordonRamsay("Gordon Ramsay");
        gordonRamsay.makeSalad();
        gordonRamsay.makeSoup();
        gordonRamsay.makePasta();

        ItalianChef anthonyBourdain("Anthony Bourdain", 100, 250);
        anthonyBourdain.makeSalad();
        anthonyBourdain.makeSoup();
        anthonyBourdain.makePasta();

        return 0;
        }



