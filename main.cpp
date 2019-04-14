#include <iostream>

using namespace std;
    
class Thing
{
    public:
    int r;
    int c;
    string what;
    Thing(){}
    Thing(int pr, int pc)
    {    
        if (pr>=0 && pr<=9) r = pr;
        else cout << "Error: wrong R coordinate " << pr << endl;
       
    
            
        if (pc>=0 && pc<=9) c = pc;
        else cout << "Error: wrong R coordinate " << pr << endl;
        what = "thing";
    }

};

class Pacman: public Thing
{
    public:
    Pacman(int pr, int pc): Thing(pr,pc){
    what = "pacman";
    }
   

};

class Mine: public Thing
{
    public:
    Mine(int pr, int pc): Thing(pr,pc){
    what = "mine";
    }
    
};

class MedKit: public Thing
{
    public:
    MedKit(int pr, int pc): Thing(pr,pc){
        what = "madkit";
    }


};
//karta igri

class GameMap
{
    public:


    Thing grid[10][10];

    GameMap()
    {
        // reset();
        // grid[4][4]=1; 
    }

    // void reset()
    // {
    //     for (int r = 0; r <= 9; r++)
    //     {
    //         for (int c = 0; c <= 9; c++)
    //         {
    //             grid[r][c]=0;
    //         }
    //     }        
    // }

    string divider()
    {
        string d = "";
        int n = 0;
        while(n++<29){
            d+="#";
        }
        
        return d+"\n";
    }

    void add(Thing thing)
    {
        grid[thing.r][thing.c] = thing;
    }


    void show()
    {
        cout << divider();
        for (int r = 0; r <= 9; r++)
        {
            for (int c = 0; c <= 9; c++)
            {
                if (grid[r][c].what == "thing")
                {
                    cout << " . ";
                }
                else if (grid[r][c].what == "pacman")
                {
                    cout << " + ";
                }
                // else cout << " + ";
            }
            cout << endl;
        }


        cout << divider();
    }
};



int main ()
{
    Pacman pac(2,2);
    GameMap gm;

    gm.add(pac);
    gm.show();
   
}