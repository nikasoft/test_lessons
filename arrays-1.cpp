#include <iostream>
using namespace std;

// collection ORDERED / same type
// index -> 0
int min_price =0, max_price = 0;
int prices[5] = {
    50, // 0
    10, // 1
    100, //2
    5,   // 3
    200  // 4
};

int main (){
    cout <<"From: ";
    cin >> min_price;

    cout << "To: ";
    cin >> max_price;

    // cout << prices[0] << endl;
    // cout << prices[1] << endl;
    // cout << prices[2] << endl;
    for (int i = 0; i < 5;i++){
        if (prices[i] <= max_price && prices[i] >= min_price)
        cout << prices[i] << endl;
    }
}