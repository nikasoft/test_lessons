#include <iostream>
using namespace std;

class Product{
    public:
        string name;
        int price;
        string cathegory;
        Product(){};
        Product(string n, int p, string cat){
            name = n;
            price = p;
            cathegory = cat;
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
    //setlocale(LC_ALL,"RUS");
    products[0] = Product("Lottery Ticket", 50, "Do not eat");
    products[1] = Product("Ice Cream", 10,"Eat");
    products[2] = Product("Bisquit", 100,"Eat");
    products[3] = Product("Coffee", 5,"Eat");
    products[4] = Product("Water", 200,"Eat");

    cout <<"From: ";
    cin >> min_price;

    cout << "To: ";
    cin >> max_price;
        //products[4].price

    for (int i = 0; i < 5;i++){
        if (products[i].price <= max_price && products[i].price >= min_price)
        cout << products[i].name << " - " << products[i].price << " - " << products[i].cathegory << endl;
    }
    
}