//#include "Vector.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    /*
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
    cout << "A min: " << a.find_min() << " A max:" << a.find_max() << endl;
    b.showInfo();
    cout << "B min: " << b.find_min() << " B max:" << b.find_max() << endl;
    c.showInfo();
    cout << "C min: " << c.find_min() << " C max:" << c.find_max() << endl;
*/

    vector<int> v1; // size = 0

    for (int i = 0; i < 10; ++i) {
        v1.push_back(rand()%100 - 50);
        cout << v1[i] << " ";
    }cout << endl;



    cout << "==============================\n";

    v1.insert(v1.begin() + v1.size()/2, 6, 0);

    for(int a: v1){   // for(int& a: v1)     for(auto a: v1)
        cout << a << " ";
    }cout << endl;

    cout << "==============================\n";
    replace_if(v1.begin(), v1.end(), [](int a){ return a ==0;}, 9);
    replace_if(v1.begin(), v1.begin() + v1.size()/2, [](int a){ return a < 0;}, -1);
    replace_if(v1.begin() + v1.size()/2, v1.end(), [](int a){return a < 0;}, -9);

    vector<int>::iterator it;
    for(it = v1.begin(); it != v1.end(); it++){
        cout << *it << " ";
    }cout << endl;

    return 0;
}