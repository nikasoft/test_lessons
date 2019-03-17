//Шаблоны
#include <iostream>
using namespace std;

// generic functions / classes
// generic -> universal TYPE
//typename tzeloe int; //можно создать свой тип данных

template <class T>
class Box{
    public:
        T good;
        Box (T g){
            good = g;
        }
};

int main(){

    Box <int>b1(100);
    Box <float>b2(0.5);
    cout << b1.good << endl;
    cout << b2.good << endl;
}