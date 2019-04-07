#include <iostream>

using namespace std;
    
class Thing
{
    public:
    int r;
    int c;
    Thing(){}
    Thing(int pr, int pc)
    {    
        if (pr>=0 && pr<=9) r = pr;
        else cout << "Error: wrong R coordinate " << pr << endl;
       
    
            
        if (pc>=0 && pc<=9) c = pc;
        else cout << "Error: wrong R coordinate " << pr << endl;
       
    }
     
    string what()
    {
        return "Thing";
    }
};

class Pacman: public Thing
{
    public:
    Pacman(int pr, int pc): Thing(pr,pc){
    }
        string what()
        {
        return "Pacman";
        }

};

class Mine: public Thing
{
    public:
    Mine(int pr, int pc): Thing(pr,pc){
    }
        string what()
        {
        return "Mine";
        }

};

class MedKit: public Thing
{
    public:
    MedKit(int pr, int pc): Thing(pr,pc){
    }
        string what()
        {
        return "MedKit";
        }

};
//karta igri

class GameMap
{
    public:
//array -> legend -> print
// MAP
//LEGEND
//0 - enemy
//1 - pacman
//2 - ghost
//3 - mine
//4 - health
//5 - wall

    Thing grid[10][10];//= {
        // {5,5,5,5,5,5,5,5,5,5},  //0
        // {5,0,0,0,0,0,0,0,0,5},  //1
        // {5,0,0,0,0,0,0,0,0,5},  //2
        // {5,0,0,0,0,0,0,0,0,5},  //3
        // {5,0,0,0,1,0,0,0,0,5},  //4
        // {5,0,0,0,0,0,0,0,0,5},  //5
        // {5,0,0,0,0,0,0,0,0,5},  //6
        // {5,0,0,0,0,0,0,0,0,5},  //7
        // {5,0,0,0,0,0,0,0,0,5},  //8
        // {5,5,5,5,5,5,5,5,5,5}   //9
    //};// 0 1 2 3 4 5 6 7 8 9

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

    // void show()
    // {
    //     cout << divider();
    //     for (int r = 0; r <= 9; r++)
    //     {
    //         for (int c = 0; c <= 9; c++)
    //         {
    //             if (grid[r][c] == 0)
    //             {
    //                 cout << " . ";
    //             }
    //             else cout << " + ";
    //         }
    //         cout << endl;
    //     }


    //     cout << divider();
    // }
};



int main ()
{
    Pacman pac(-4,4);
    cout <<pac.what() << endl;
    Thing t(-3,3);
    cout <<t.what() << endl;    
    // GameMap gm;
    // gm.show();
   
}
