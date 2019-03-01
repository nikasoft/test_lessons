#include <iostream>
using namespace std;

// class - phones
class SmartPhone 
{
    public:
    //Properties
    unsigned char cores=8; // Диапазон 0-256
    float diagonal = 10;
    string os = "Android";
    string version = "8.0";
    string brand = "Xiaomi 6";
    string owner = "";
    unsigned int price =1000;

    //Methods
        SmartPhone(string o, unsigned int p)  //Конструктор (специальный метод)
        {
            owner = o;
            price = p;
        }

        void info()
        {
            cout << '\n' << owner <<'\t'<<brand<<" "<<os<<" "<<price<<" USD";

        }
};



int main()
{
    setlocale (LC_ALL,"RUS");
    //declare objects

    SmartPhone my_phone("Никита", 1000);
    SmartPhone friend_phone("Иван", 900);
    SmartPhone boss_phone("Сергей", 700);

    // my_phone.owner= "Никита";
    // friend_phone.owner = "Иван";
    // boss_phone.owner = "Сергей";
    
/* //ВВод данных с клавиатуры 
    cout << "Введите стоимость телефона: \n\n";
    cout << "Стоимость моего телефона: ";
    cin >> my_phone.price;

    cout << "Стоимость телефона моего друга: ";
    cin >> friend_phone.price;

    cout << "Стоимость телефона босса: ";
    cin >> boss_phone.price;

*/
    // friend_phone.price = 900;
    // boss_phone.price = 0;

    // cout << "\nМой телефон\t"<<my_phone.brand<<" "<<my_phone.os<<" "<<my_phone.price<<" USD";
    // cout << "\nТелефон друга\t"<<friend_phone.brand<<" "<<friend_phone.os<<" "<<friend_phone.price<<" USD";
    // cout << "\nТелефон босса\t"<<boss_phone.brand<<" "<<boss_phone.os<<" "<<boss_phone.price<<" USD"<<endl;

    my_phone.info();
    friend_phone.info();
    boss_phone.info();

    return 0;

}