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
/*   
        // данный метод будет сравнивать параметры текущего автомобиля с каким то другим
        bool isBetter(Car other) //ВАРИАНТ 1
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
*/
        //объявляем оператор > для нашего класса car
        bool operator > (Car other) //ВАРИАНТ 2 ЛАКОНИЧНЫЙ
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
        
        bool operator == (Car other) 
        {
             if (
                power == other.power &&
                year == other.year &&
                price == other.price &&
                sport == other.sport
                )
            {
                return true;
            }
            else 
            {
                return false;
            } 
        }

                bool operator < (Car other) 
        {
             if (
                power || other.power &&
                year || other.year &&
                price || other.price &&
                sport || other.sport
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
    Car my_car(60.5, 2000, 10000, 0);
    my_friends_car.info();
    my_car.info();

/*
    if (my_car.isBetter(my_friends_car))  // ДЛЯ ВАРИАНТА 1
        cout << "My car is better!"<<endl;// ДЛЯ ВАРИАНТА 1
*/   
    if (my_car > my_friends_car)            // ДЛЯ ВАРИАНТА 2
        cout << "My car is better!"<<endl;  // ДЛЯ ВАРИАНТА 2
    if (my_car == my_friends_car)            
        cout << "My car is the same!"<<endl;
    if (my_car < my_friends_car)            
        cout << "My car is worse!"<<endl;
    

}