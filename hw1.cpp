// working with:
//  -- MEMORY --(c/c++)
// * values 
// * &reference
// * pointers

#include <iostream>
using namespace std;
int a = 10;
int b = 100;
int c = 1000;

int *p = &a;

int main(){
    

    cout << "Adress of \"a\" : " << &a << endl;
    cout << "Adress of \"b\" : " << &b << endl;
    cout << "Adress of \"c\" : " << &c << endl;
    
    cout << "Value of \"a\" : " << *p << endl;

    p++;
    (*p)+=10;
    cout << "Value of \"b\" : " << *p << endl;

    p++;

    cout << "Value of \"c\" : " << *p << endl;





}
