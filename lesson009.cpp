#include <iostream>
using namespace std;

class Car
{
    public:
        float power; //horsepower
        unsigned int year; //fabrication
        unsigned long price; //MDL
        bool sport; //поддерживает спорт режим
        Car (float pow, unsigned int y, unsigned long pr, bool sp) //konstruktor
        {
            power = pow;
            year = y;
            price = pr;
            sport = sp;
        }

        void info () //metod
        {
            cout << power <<' '<< year << ' '<< price << ' ' << sport <<'\n';
        }
        // данный метод будет сравнивать параметры текущего автомобиля с каким то другим
        bool isBetter(Car other)
        {
            if (
                power > other.power &&
                year > other.year &&
                price > other.price &&
                sport > other.sport
                )
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
};

int main()
{
    Car my_friends_car(60.5, 2001, 10000, 0);
    Car my_car(200.0, 2020, 100000, 1);
    my_friends_car.info();
    my_car.info();

    // which car is better

    // if (
    //     my_car.power > my_friends_car.power &&
    //     my_car.year > my_friends_car.year &&
    //     my_car.price > my_friends_car.price &&
    //     my_car.sport > my_friends_car.sport
    //     )
    if (my_car.isBetter(my_friends_car))
        cout << "My car is better!"<<endl;

}