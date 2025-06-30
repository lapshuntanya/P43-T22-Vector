#include "Vector.h"

int main() {
    Vector<int> a; //size = 0
    Vector<int> b(3, 8); //[8, 8, 8]

    Vector<char> c(4, 'a');


    a.showInfo();
    b.showInfo();
    c.showInfo();



    return 0;
}