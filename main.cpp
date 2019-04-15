//1 - добавить в объект пакмана свойство хелс(изначатьно 100)
//2 - на каждом кругу под картой выводить хелс
//3 - когда он забегает на мину -25 хесл
//4 - когда забегает на медкит +10 хелс
#include <iostream>
#include <stdlib.h>

/* for windows*/
#ifdef _WIN32
#include "conio.h"
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
    tcgetattr(STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
    return ch;
}
/* reads from keypress, echoes */
int getche(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr(STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~(ICANON);
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
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
    string what;
    Thing()
    {
        what = "thing";
    }
    Thing(int pr, int pc)
    {
        if (pr >= 0 && pr <= 9)
            r = pr;
        else
            cout << "Error: wrong R coordinate " << pr << endl;

        if (pc >= 0 && pc <= 9)
            c = pc;
        else
            cout << "Error: wrong R coordinate " << pr << endl;
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
        while (n++ < 29)
        {
            d += "#";
        }

        return d + "\n";
    }

    void add(Thing thing)
    {
        grid[thing.r][thing.c] = thing;
    }

    void show()
    {
#ifdef _WIN64
        system("cls");
#elif __linux
        system("clear"); //linux
#endif

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
                    cout << " C ";
                }
                else if (grid[r][c].what == "mine")
                {
                    cout << "\033[1;31m"; //mine color is red
                    cout << " x ";
                    cout << "\033[1;32m"; //set default color
                }
                else if (grid[r][c].what == "medkit")
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

GameMap gm;
class Pacman : public Thing
{
  public:
    Pacman(int pr, int pc) : Thing(pr, pc)
    {
        what = "pacman";
    }
    void moveDown()
    {
        gm.grid[++r][c] = gm.grid[r][c];
        gm.grid[r - 1][c] = Thing(); // clear the place
    }
    void moveUp()
    {
        gm.grid[--r][c] = gm.grid[r][c];
        gm.grid[r + 1][c] = Thing(); // clear the place
    }
    void moveLeft()
    {
        gm.grid[r][--c] = gm.grid[r][c];
        gm.grid[r][c + 1] = Thing(); // clear the place
    }
    void moveRight()
    {
        gm.grid[r][++c] = gm.grid[r][c];
        gm.grid[r][c - 1] = Thing(); // clear the place
    }
};

class Mine : public Thing
{
  public:
    Mine(int pr, int pc) : Thing(pr, pc)
    {
        what = "mine";
    }
};

class MedKit : public Thing
{
  public:
    MedKit(int pr, int pc) : Thing(pr, pc)
    {
        what = "medkit";
    }
};
//karta igri

int main()
{
    Pacman pac(5, 5);
    gm.add(pac);
    gm.add(Mine(6, 5));
    gm.add(MedKit(7, 5));
    gm.show();

    while (1)
    {
        gm.show();
        cout << "Left \"A\"";
        char c = getch();
        switch (c)
        {
        case 'w':
            pac.moveUp();
            break;
        case 'a':
            pac.moveLeft();
            break;
        case 'd':
            pac.moveRight();
            break;
        case 's':
            pac.moveDown();
            break;
        }
    }

    gm.show();
}