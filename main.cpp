#include "Vector.h"

int main() {

    Vector<int> a; //size = 0
    a.push_back(-4);
    a.push_back(-9); //-4 -9
    a[0] = 67; // a => 67 -9

    Vector<int> b(3, 8); //[8, 8, 8]
    b.push_back(89);
    b.push_back(56); // 8  8  8 89 56
    b[1] = -4; // 8 -4 8 89 56

    Vector<char> c(4, 'a');
    c.push_back('h');
    c.push_back('k'); // a a a a h k
    c[2] = 't'; // a a t a h k


    a.showInfo();
    b.showInfo();
    c.showInfo();



    return 0;
}