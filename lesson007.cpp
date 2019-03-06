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
        void show()
        {
            cout << name << " " << x << " " << y << " " << skin << endl;
        }

       unsigned short positionX(unsigned short k)
       {
           k = x;
            return k;
       } 
       unsigned short positionY(unsigned short l)
       {
           
           l = y;
            return l;
       } 

      
/* ------------------------------------------------------------------------------------------*/
    Medic (string der_Name, unsigned short iks, unsigned short igrik, char der_skin)
    {   
        name = der_Name;
        x = iks;           
        y = igrik;
        skin = der_skin;
 
    } 
    
    Assault (string der_Name, unsigned short iks, unsigned short igrik, char der_skin)
    {   
        name = der_Name;
        x = iks;           
        y = igrik;
        skin = der_skin;
    }

    Sniper (string der_Name, unsigned short iks, unsigned short igrik, char der_skin)
    {   
        name = der_Name;
        x = iks;           
        y = igrik;
        skin = der_skin;
    }

    Mechanic (string der_Name, unsigned short iks, unsigned short igrik, char der_skin)
    {   
        name = der_Name;
        x = iks;           
        y = igrik;
        skin = der_skin;
    } 
/* ----------------------------------------------------------------------------------------*/  

};
/* ----------------Наследование--------------------- */

    // class PlayerType : public Player{

    //     public:
    //     PlayerType () : Player ()
    //     {}

    // };

    /* -----------------конец наследования-------------------- */
unsigned short i, j, k, l, a, b, c, d;
// char face1, face2;
 
/* Функция отображающая сетку*/
int showMap(int a, int b)
    {
       unsigned short x=20;             //размер поля
        unsigned short y=20;            //размер поля
        unsigned short count;           //счётчик 
        a = a - 1;
        b = b - 1;
        c = c - 1;
        d = d - 1;
        cout << "   ";
        /* Отображаес нумерацию по Х*/
        for (i=1; i<=20;i++) 
            {
               count = i;
               if (count <= 9) cout << count << "  ";
               else cout << (count % 10) << "  ";

            }
        /* ------------------------ */
        cout << endl;
        /* Сетка и нумерация по У*/
        for (i=0; i<x; i++)
            {
               count = i+1;
               if (count <= 9) cout << count << "  ";
               else cout << (count % 10) << "  ";
               
               for (j=0; j<y; j++) 
               {
                   if (i == a && j == b) cout << "+  ";
                   else if (i == c && j == d) cout << "^  ";
                   else cout << ".  ";
               }
               cout << endl;

            }
        /* ---------------------- */    
        cout << endl;
    }
/* Конец функции */

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
    Player m,s;
    m.Medic("medos",1,1,'+');
    s.Sniper("spapic",10,10,'^');
    
    // m.show(); //work
    // s.show(); //work
    // m.position();
    // s.position();
    // cout << m.positionX(k) << " " << m.positionY(l)<< endl;
    // cout << s.positionX(k) << " " << s.positionY(l)<< endl;
    a=m.positionX(k);
    b=m.positionY(l);
    c=s.positionX(k);
    d=s.positionX(l);
      // cout <<a<<' '<<b;
    showMap(a,b);  //work
}

// исправьте ошибки и допишите код так чтобы все пункты выполнялись.