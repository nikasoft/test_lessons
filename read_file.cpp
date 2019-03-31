#include <iostream>
#include <fstream>
#include <cstring>
#include <windows.h>
#include <shellapi.h>

using namespace std;


int main()
{
    // setlocale(LC_ALL,"rus");
    int number;
    char buff[21], _TEXT;
    cout << "Copy file test.txt to \"c:\\proxy.txt\"" << endl;
    cout << "Copyright by NikaSOFT ver 0.1"<< endl << endl;
    cout << "Enter string number (q - Exit): " << endl;
    while (number != 0)
    {
        
        cin >> number;
        ifstream fin("c:\\proxy.txt"); //отрыл файл для чтения нужно подключить <fstream>
        for (int i = 0; i < number; i++)
            fin.getline(buff, 20); //считываем строку длинной 20 символов и заносим в массив buff нужно подключить <fstream>
        fin.close(); // закрываем файл
        cout /*<< "String number " << number */<< " is: " << buff << endl;
        
        // system("start iexplore.exe"); //запускаем файл надо подключить<windows.h>
        // тут нужно заменить прокси
        ShellExecute(NULL, "open", "c:\\Program Files\\internet explorer\\iexplore.exe", _TEXT(buff), NULL, 1); //запускаем файл надо подключить <Shellapi.h>
        memset(buff, 0, sizeof buff); // очистка массива buff нужно подключить <cstring>
    }
}