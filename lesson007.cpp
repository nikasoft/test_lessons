#include <iostream>
using namespace std;

class Player{
    public:
       
        string name;                // имя в игре  
        unsigned short health;      // колво очков жизни (0-100 / 0 - мертв) **************** ДИАПАЗОН ОТ −32767 ДО +32767
        unsigned int experience;    // колво очков опыта - с названиями уровня ниже ********* ДИАПАЗОН ОТ 0 ДО +65535
                                       /*
                                             (0-100 - noob)
                                             (101-1000 - rookie)
                                             (1001-10000 - skilled)
                                             (10001-100000 - veteran )
                                             (1000000+ - god )
                                       */
        // координаты игрока на экране
        unsigned short x;           
        unsigned short y;
        // скин - это то знак через который наш персонаш выводится на экране
        // напр. '#' или '+' 
        char skin; 
        // 2) вопрос - как называется все что мы объявили после public:?? **************** СВОЙСТВА КЛАССА

        // метод который выводит наш персонаж на экран
        void show(){
            cout << skin;
        }
        Medic (string der_Name, unsigned short iks, unsigned short igrik, der_skin='+')
    {   
        name = der_Name;
        x = iks;           
        y = igrik;
        skin = der_skin
 
    } 
    
    Assault (string der_Name, unsigned short iks, unsigned short igrik, '@')
    {   
        name = der_Name;
        x = iks;           
        y = igrik;

    }

    Sniper (string der_Name, unsigned short iks, unsigned short igrik, '^')
    {   
        name = der_Name;
        x = iks;           
        y = igrik;

    }

    Mechanic (string der_Name, unsigned short iks, unsigned short igrik, '%')
    {   
        name = der_Name;
        x = iks;           
        y = igrik;

    } 

};


int showMap()
    {
       unsigned short x;           
        unsigned short y;

        for (x=0; x++; x<20)
            {
               for (y=0; y++; y<20) 
               {
                   cout << '.';
               }
               cout << endl;
            }
        cout << endl;
    }
int main(){
    // 4) создайте одного медика с Medic m("medos",1,1)
    // 5) создайте одного снайпера с Sniper s("spapic",10,10)
    // 6) напишите функцию showMap() которая в не классах так чтобы
    //    она при помощи 2 for() вывела карту
    //    исходя из того что вы создали до сих пор - результат на экране должен выглядеть
    //    так (внимание - по бокам есть координаты! не полные)

    //      1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0
    //    1 + . . . . . . . . . . . . . . . . . . .
    //    2 . . . . . . . . . . . . . . . . . . . .
    //    3 . . . . . . . . . . . . . . . . . . . .
    //    4 . . . . . . . . . . . . . . . . . . . .
    //    5 . . . . . . . . . . . . . . . . . . . .
    //    6 . . . . . . . . . . . . . . . . . . . .
    //    7 . . . . . . . . . . . . . . . . . . . .
    //    8 . . . . . . . . . . . . . . . . . . . .
    //    9 . . . . . . . . . . . . . . . . . . . .
    //    0 . . . . . . . . . ^ . . . . . . . . . .
    //    1 . . . . . . . . . . . . . . . . . . . .
    //    2 . . . . . . . . . . . . . . . . . . . .
    //    3 . . . . . . . . . . . . . . . . . . . .
    //    4 . . . . . . . . . . . . . . . . . . . .
    //    5 . . . . . . . . . . . . . . . . . . . .
    //    6 . . . . . . . . . . . . . . . . . . . .
    //    7 . . . . . . . . . . . . . . . . . . . .
    //    8 . . . . . . . . . . . . . . . . . . . .
    //    9 . . . . . . . . . . . . . . . . . . . .
    //    0 . . . . . . . . . . . . . . . . . . . .
    // Medic ("medos",1,1);
    // Sniper s("spapic",10,10);
    showMap();
}

// исправьте ошибки и допишите код так чтобы все пункты выполнялись.