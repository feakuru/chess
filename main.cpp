#include <iostream>
#include "figure.h"

using namespace std;

int main()
{
    Pawn p1;
    cout << "We have a " << p1.getName() << " with "
         << p1.getPrice() << " price!" << endl;
    return 0;
}
