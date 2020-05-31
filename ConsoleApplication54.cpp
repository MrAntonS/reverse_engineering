#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <algorithm>

using namespace std;

int main() {
    char ch;
    int code;
    int hp = 100;
    int *p_hp = &hp;
    cout << p_hp << endl;
    while (hp > 0)
    {
        ch = _getch();
        code = static_cast<int>(ch);
        if (ch == 32) {
            hp = hp - 15;
            cout << "Your hp now is " << hp << '\n';
        }
    }
    int x;
    cin >> x;
}