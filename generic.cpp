//Шаблоны
#include <iostream>
using namespace std;

// generic functions / classes
// generic -> universal TYPE
//typename tzeloe int; //можно создать свой тип данных

template <typename T, typename TT, typename TTT>
TTT divide(T a, TT b){
    return (TTT)a / (TTT)b;
}

// double divide(double a, double b){
//     return a / b;
// }
int a, b;

int main(){
    cout << "a, b : ";
    cin >> a >> b;
    cout << divide<int, int, float>(a, b) << endl; // <int> принудительно заставляет с каким типом надо работать
    
}