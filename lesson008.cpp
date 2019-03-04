#include <iostream>
using namespace std;

class School
{
    public:
        void average(double mark1, double mark2)
    {
        cout << (mark1+mark2)/2<<endl;
    }

        void average(double mark1, double mark2, double mark3)
    {
        cout << (mark1+mark2+mark3)/3<<endl;
    }

    void average(double mark1, double mark2, double mark3, double mark4)
    {
        cout << (mark1+mark2+mark3+mark4)/4<<endl;
    }

};
 int main()
 {
     School a;
     a.average(2,4);
     a.average(2,4,5);
     a.average(2,4,3,6);
 }