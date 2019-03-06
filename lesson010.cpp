#include <iostream>
using namespace std;

class Candy{
    public:
    string name;
    float kkal;
    float price; // mdl/100gr;
    string country; //manufacture
    //constructor
    Candy (string n, float k, float p, string c)
    {
    name = n;
    kkal = k;
    price = p; 
    country = c; 

    }
    /*
    =================================
    candy: Red Chups" (370.05kkal/gr)
    price: 27.5MDL
    =================================
    */

    void info()
    {
        cout << "====================================\n";
        cout << "Конфета: " << name << "(" << kkal << "kkal/gr)\n";
        cout << "Цена:    " << price <<"MDL\n";
        cout << "====================================\n";
    }
    //////////OPERATOR OVERLOADING//////////////////

    bool operator > (Candy other) 
    {
        return price < other.price && kkal < other.kkal;
    }
    // ДЗ - 1 Переопределить < и ==

    
};

int main()
{
    setlocale(LC_ALL,"RUS");
    // cout << "Крассная конфета ";
    Candy red_candy ("Red Chups", 370.05, 27.50, "UA");
    Candy black_candy ("Black Cups Bomb", 600, 100, "IL");
    red_candy.info();
    if (red_candy > black_candy)
    {
        cout << "Red candy is better!";
    }
    
}