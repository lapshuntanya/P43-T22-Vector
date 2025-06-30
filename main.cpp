#include "Vector.h"

int main() {
    Vector<int> a; //size = 0
    a.push_back(-4);
    a.push_back(-9);

    Vector<int> b(3, 8); //[8, 8, 8]
    b.push_back(89);
    b.push_back(56);

    Vector<char> c(4, 'a');
    c.push_back('h');
    c.push_back('k');


    a.showInfo();
    b.showInfo();
    c.showInfo();



    return 0;
}