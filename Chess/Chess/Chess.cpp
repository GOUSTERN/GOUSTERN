#include <iostream>
#include <Windows.h>

using namespace std;

char screen[9][9];

void numberesation()
{
    for (int y = 1; y <= 9; y++)
    {
        for (int x = 1; x <= 9; x++)
        {
            if (x == 1 && y != 9)
                screen[y][x] = char(64 + y);
            else if (y == 9 && x != 1)
                screen[y][x] = 47 + x;
            else if(x % 2 == 0 && y % 2 == 1)
                screen[y][x] = char(219);
            else if (x % 2 == 1 && y % 2 == 0)
                screen[y][x] = char(219);
                else
                screen[y][x] = ' ';
        }
    }
}

void screen_preview()
{
    for (int y = 1; y <= 9; y++)
    {
        for (int x = 1; x <= 9; x++)
        {
            cout << screen[y][x];
        }
        cout << endl;
    }
}

int main()
{
    numberesation();
    screen_preview();
    cout << char(65);
    Sleep(60000);
    return 0;
}