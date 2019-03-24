#include <iostream>
using namespace std;

class Water
{
    public:
        float volume; // liters
        Water (float v)
        {
            volume = v;
        }
        void info ()
        {
            cout << "WATER[ " << volume << "L]" << endl;
        }
        Water operator + (Water other)
        {
            return Water(volume + other.volume);
        }
};

int main()
{
    Water cup (0.2);
    Water big_cup(0.5);
    cup.info();
    big_cup.info();
    Water pinta(0);
    pinta = cup + big_cup;
    pinta.info();
}