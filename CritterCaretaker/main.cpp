#include <iostream>
#include "Critter.h"

using std::cout;
using std::endl;

int main() {
    Critter crit(5);
    cout << crit.GetHunger() << endl; ;

    crit.SetHunger(-1);

    crit.SetHunger(9);
    crit.Greet();
    cout << crit.GetHunger();
    cout << Critter::s_Total << endl;
    Critter crit2(6);
    cout << Critter::s_Total << endl;
    Critter crit3(4);
    cout << Critter::s_Total << endl;
    return 0;
}
