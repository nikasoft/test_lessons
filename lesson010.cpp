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
        char unsigned i; // диапазон от 0 до 255.
        char ch1(201), ch2(205), ch3(187), ch4(186), ch5(200), ch6(188);
        // cout << "====================================\n";
        // cout << "| Candy: " << name << "(" << kkal << "kkal/gr)  |\n"; 
        // cout << "| Price:    " << price <<"MDL                |\n";
        // cout << "====================================\n";

        cout << ch1; for (i=0; i<34; i++) cout << ch2; cout << ch3 << endl;
        cout << ch4 << " Candy: " << name << "(" << kkal << "kkal/gr)  " << ch4 << endl; 
        cout << ch4 << " Price:       " << price << "MDL             " << ch4 << endl; 
        cout << ch4 << " Country:     " << country << "                  " << ch4 << endl; 
        cout << ch5; for (i=0; i<34; i++) cout << ch2; cout << ch6 << endl;

    }
    //////////OPERATOR OVERLOADING//////////////////

    bool operator > (Candy other) // Переопределяем оператор <
    {
        return price < other.price && kkal < other.kkal;
    }
    // ДЗ - 1 Переопределить < и ==

    bool operator == (Candy other) // Переопределяем оператор ==
    {
        return price == other.price && kkal == other.kkal;
    }

    bool operator < (Candy other) // Переопределяем оператор >
    {
        return price > other.price && kkal > other.kkal;
    }

};

int main()
{
    Candy red_candy ("Red Chups", 370.05, 27.50, "UA");
    Candy black_candy ("Black Cups Bomb", 600, 100, "IL");
    red_candy.info();
        if (red_candy > black_candy)
    {
        cout << "Red candy is better!";
    }
    
        if (red_candy == black_candy)
    {
        cout << "Red candy is same!";
    }
        if (red_candy < black_candy)
    {
        cout << "Red candy is worse!";
    }

}