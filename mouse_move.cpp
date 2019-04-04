#include <windows.h>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{

    // POINT cp;
    SetCursorPos(1895, 55);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); // нажали левую кнопку мыши
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   // отпустили левую кнопку мыши ( НЕ ЗАБЫВАТЬ )
    Sleep(1000);
    SetCursorPos(1700, 420);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); // нажали левую кнопку мыши
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   // отпустили левую кнопку мыши ( НЕ ЗАБЫВАТЬ )
    Sleep(1000);
    // mouse_event(MOUSEEVENTF_WHEEL, 0, 0, -1200, 0);
  

    // mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   // отпустили левую кнопку мыши ( НЕ ЗАБЫВАТЬ )
    // Sleep(2000);
    // SetCursorPos(cp.x, cp.y);
    // cout << GetLastError();
    return 0;
}