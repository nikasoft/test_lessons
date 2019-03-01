#include <iostream>
using namespace std;
/////////////////////////
//base
class Movie{
    public:
        string title = "Terminator 7";
        string genre = "worthless"; //text
        int duration; //min
        float rating;
        int age; // age +
        //constructor()
        Movie(string t, string g, int dur, float rat, int a){
            title = t;
            genre = g;
            duration = dur;
            rating = rat;
            age = a;

        }
        void about(){

            cout << title << ", " << genre <<", "<< duration << ", " << rating << ", " << age << endl;
        }
};

int main(){
    Movie cool_movie("Terminator 7", "worthless", 200,1.5,60);
    cool_movie.about();

}