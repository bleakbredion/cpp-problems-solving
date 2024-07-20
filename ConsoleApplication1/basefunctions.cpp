#include <iostream>
#include <vector>
#include "mainTitle.h"

using namespace std;

void print1(vector<int>a) {
    for (int i : a) {
        cout << i << ' ';
    }
    cout << '\n';
}

void print2(vector<vector<int>> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << "(" << a[i][0];
        for (size_t j = 1; j < a[i].size() - 1; j++) {
            cout << ' ' << a[i][j];
        }
        if (a[i].size() > 1) {
            cout << ' ' << a[i][a[i].size() - 1];
        }
        cout << ")\n";
    }
    cout << endl;
}
/*
void need_to_analisy()
{
    HANDLE hSTDOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO SCRN_INFO;
    GetConsoleScreenBufferInfo(hSTDOut, &SCRN_INFO);

    //  FillConsoleOutputCharacter(hOutput, ' ',
    //  SCRN_INFO.dwSize.X*SCRN_INFO.dwSize.Y, POS, NULL);
    FillConsoleOutputAttribute(hSTDOut,
        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE /*цвет*//*,
        SCRN_INFO.dwSize.X * SCRN_INFO.dwSize.Y, SCRN_INFO.dwCursorPosition, NULL);
    
/*
    //Можно управлять курсором если поменять параметры в SCRN_INFO.dwCursorPosition ;)
    SetConsoleCursorPosition(hSTDOut, SCRN_INFO.dwCursorPosition);

    char str[] = "Example whitch shows graphical compabilitest of console fonts";
    int sLen = strlen(str);
    WORD wColour = FOREGROUND_RED;
    for (int i = 0, k = 0; i < sLen; i++, k++)
    {
        if (k == 0)
            wColour = FOREGROUND_RED;
        if (k == 1)
            wColour = FOREGROUND_GREEN;
        if (k == 2)
        {
            wColour = FOREGROUND_BLUE;
            k = 0;
        }
        SetConsoleTextAttribute(hSTDOut, wColour | FOREGROUND_INTENSITY);
        printf("%c", str[i]);
    }
    SetConsoleTextAttribute(hSTDOut,
        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\r\n");
    system("pause");
}
*/