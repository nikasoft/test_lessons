//1 - добавить gameover
//2 - сохранить хелс

#include <iostream>
#include <stdlib.h>
#include <fstream>

/* for windows*/
#ifdef _WIN32
#include <conio.h>
/* for windows*/
#elif __linux
/* for Linux*/
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
/* reads from keypress, doesn't echo */
int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}
/* reads from keypress, echoes */
int getche(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}
/* for Linux*/
#endif

using namespace std;
    
class Thing
{
    public:
    int r;
    int c;
    char direction; 
    int health;

    string what;
    Thing(){
        what = "thing";
        health = 100;
    }
    Thing(int pr, int pc)
    {    
        health = 100;
        if (pr>=0 && pr<=9) r = pr;
        else cout << "Error: wrong R coordinate " << pr << endl;
       
    
            
        if (pc>=0 && pc<=9) c = pc;
        else cout << "Error: wrong R coordinate " << pr << endl;
        what = "thing";
    }

};

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
        #ifdef _WIN32
            system("cls");
        #elif __linux    
            system("clear"); //linux
        #endif

        int health = 0;
        int mines = 0;
        int medkits = 0;

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
                    cout << " " << grid[r][c].direction << " ";
                    health = grid[r][c].health;
                }
                else if (grid[r][c].what == "mine")
                {
                    cout << "\033[1;31m"; //mine color is red
                    cout << " x ";
                    cout << "\033[1;32m"; //set default color
                    mines++;
                }                
                else if (grid[r][c].what == "medkit")
                {
                    cout << " + ";
                    medkits++;
                }                
                // else cout << " + ";
            }
            cout << endl;
        }


        cout << divider();
        cout << "hp:      " << health << endl;
        cout << "mines:   " << mines << endl;
        cout << "medkits: " << medkits << endl;
    }
};

GameMap gm;
class Pacman: public Thing
{
    public:


    Pacman(int pr, int pc): Thing(pr,pc){
    what = "pacman";
    direction = '>';
    }
   void moveDown()
   {
       gm.grid[r][c].direction = 'V';

           if (gm.grid[r+1][c].what == "mine")
       {
           gm.grid[r][c].health-=20;
       }
           else if (gm.grid[r+1][c].what == "medkit")
       {
           gm.grid[r][c].health+=10;
       }
       
       gm.grid[++r][c] = gm.grid[r][c];
       gm.grid[r-1][c] = Thing(); // clear the place
       
      
   }
   void moveUp()
   {
       gm.grid[r][c].direction = '^';

           if (gm.grid[r-1][c].what == "mine")
       {
           gm.grid[r][c].health-=20;
       }
           else if (gm.grid[r-1][c].what == "medkit")
       {
           gm.grid[r][c].health+=10;
       }

       gm.grid[--r][c] = gm.grid[r][c];
       gm.grid[r+1][c] = Thing(); // clear the place
       
      
   }
   void moveLeft()
   {
       gm.grid[r][c].direction = '<';

           if (gm.grid[r][c-1].what == "mine")
       {
           gm.grid[r][c].health-=20;
       }
           else if (gm.grid[r][c-1].what == "medkit")
       {
           gm.grid[r][c].health+=10;
       }

       gm.grid[r][--c] = gm.grid[r][c];
       gm.grid[r][c+1] = Thing(); // clear the place
       
   }
   void moveRight()
   {
       gm.grid[r][c].direction = '>';

           if (gm.grid[r][c+1].what == "mine")
       {
           gm.grid[r][c].health-=20;
       }
           else if (gm.grid[r][c+1].what == "medkit")
       {
           gm.grid[r][c].health+=10;
       }

       gm.grid[r][++c] = gm.grid[r][c];
       gm.grid[r][c-1] = Thing(); // clear the place
       
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
        what = "medkit";
    }


};
//karta igri

int r(int min, int max)
{
    return min + rand() % (max-min);
}

void save_game()
{
    ofstream of("./game.txt", ofstream::out);
            for (int r = 0; r <= 9; r++)
        {
            for (int c = 0; c <= 9; c++)
            {
                of << gm.grid[r][c].what << " ";
            }
        }        
    of.close();
}
Pacman pac(r(0,9),r(0,9));

void load_game()
{
        ifstream ifs("./game.txt", ofstream::in);
        string what;
            for (int r = 0; r <= 9; r++)
        {
            for (int c = 0; c <= 9; c++)
            {
                ifs >> what;
                if(what == "thing")
                {
                    gm.grid[r][c] = Thing (r,c);
                }
                else if (what == "pacman")
                {
                    gm.grid[r][c] = Pacman (r,c);
                    pac = Pacman(r,c);
                }
                else if (what == "mine")
                {
                    gm.grid[r][c] = Mine (r,c);
                }
                else if (what == "medkit")
                {
                    gm.grid[r][c] = MedKit (r,c);
                }
            }
        }        
    ifs.close();
}

int main ()
{


    gm.add(pac);
    
    int mines = r(20,30);
    while (mines--)
    {
        gm.add(Mine(r(0,9),r(0,9)));
    }
    int medkits = r(1,5);
    while (medkits--)
    {
        gm.add(MedKit(r(0,9),r(0,9)));
    }    
    gm.show();
   


char c = 0;
   while(c!='x'){
       gm.show();
       cout << "Left \"A\"";
       c = getch();
       switch (c)
       {
           case 'w' : pac.moveUp();
               break;
           case 'a' : pac.moveLeft();
               break;
           case 'd' : pac.moveRight();
               break;
           case 's' : pac.moveDown();
               break;
           case '1' : save_game();
               break;
           case '2' : load_game();
               break;
           
       }
   }
   
    gm.show();
    
}