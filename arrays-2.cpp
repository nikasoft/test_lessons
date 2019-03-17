#include <iostream>
using namespace std;

class Product{
    public:
        string name;
        int price;
        Product(){};
        Product(string n, int p){
            name = n;
            price = p;
        }
};

// int prices[5] = {
//     50,               // 0
//     10,               // 1
//     100,              //2
//     5,                // 3
//     200               // 4
// };
// string names[5] = {
//     "Lottery Ticket", // 0
//     "Ice Cream",      // 1
//     "Bisquit",        // 2
//     "Coffee",         // 3
//     "Water"           // 4
// };

Product products[5];

int min_price =0, max_price = 0;

int main(){
    products[0] = Product("Lottery Ticket", 50);
    products[1] = Product("Ice Cream", 10);
    products[2] = Product("Bisquit", 100);
    products[3] = Product("Coffee", 5);
    products[4] = Product("Water", 200);

    cout <<"From: ";
    cin >> min_price;

    cout << "To: ";
    cin >> max_price;
        //products[4].price

    for (int i = 0; i < 5;i++){
        if (products[i].price <= max_price && products[i].price >= min_price)
        cout << products[i].name << " - " << products[i].price << endl;
    }
    
}