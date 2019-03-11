// working with:
//  -- MEMORY --(c/c++)
// * values 
// * &reference
// * pointers

#include <iostream>
using namespace std;

float price_photo = 2.50;
unsigned int downloads = 100000;

float *pprice_photo = &price_photo;
unsigned int *pdownloads = &downloads;

//1 - увеличить price на 10%
//2 - прочитать кол-во downloads с клавиатуры

int main(){
    cout << "Enter downloads :" ;
    cin >> *pdownloads;
    cout << *pprice_photo * *pdownloads << endl;

    cout << (*pprice_photo)*0.1+(*pprice_photo) << endl;



}
