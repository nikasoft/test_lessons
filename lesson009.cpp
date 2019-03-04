#include <iostream>
using namespace std;

class Car
{
    public:
        float power; //horsepower
        unsigned int year; //fabrication
        unsigned long price; //MDL
        Car (float pow, unsigned int y, unsigned long pr) //konstruktor
        {
            power = pow;
            year = y;
            price = pr;
        }

        void info ()
        {
            cout << power <<' '<< year << ' '<< price << '\n';
        }

};

int main()
{
    Car my_friends_car(60.5, 2001, 10000);
    my_friends_car.info();
}