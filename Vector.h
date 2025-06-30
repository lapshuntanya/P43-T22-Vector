//
// Created by Lapshun Tetiana on 30.06.2025.
//

#ifndef P43_T22_VECTOR_VECTOR_H
#define P43_T22_VECTOR_VECTOR_H

#include <iostream>
using  namespace std;

template <typename Type>
class Vector{
    Type* arr;
    int size;

public:
    Vector(){
        arr = nullptr;
        size = 0;
    }
    Vector(int _size, Type value){ //_size = 4, value = 7.8
        size = _size;
        arr = new Type[size]; // [0, 0, 0, 0]

        for (int i = 0; i < size; ++i) {
            arr[i] = value; //[7.8, 7.8, 7.8, 7.8]
        }
    }
    ~Vector(){
        if( size > 0) delete[] arr;
        arr = nullptr;
        size = 0;
    }

    void showInfo()const{
        if( size == 0) cout << "Array is empty!\n";
        else{
            for (int i = 0; i < size; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    int getSize() const	// повертає розмірність масиву
    {
        return size;
    }

    void push_back(Type item)	// додавання елемента item у кінець масиву
    {
        size++;
        Type* tmp = new Type[size];

        for (int i = 0; i < size - 1; ++i) {
            tmp[i] =arr[i];
        }

        tmp[size - 1] = item;
        if(arr != nullptr) delete[] arr;
        arr = tmp;
    }


};











#endif //P43_T22_VECTOR_VECTOR_H
