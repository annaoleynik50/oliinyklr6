#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << setw(10) << showpos << 4 << endl;
    cout << setw(15) << internal << -67.09 << endl;
    cout << setw(10) << right << showpos << 235 << endl;
    cout << noshowpos << 8 << hex << 10 << dec << 1 << endl;
    cout << fixed << setprecision(2) << -121.0 << endl;
    cout << showpos << 1 << 24 << endl;
    cout << "String1" << endl;
    cout << '\t' << "String2" << endl;
    cout << '\t' << '\t' << "String3" << endl;
    cout << '\t' << "String1" << endl;
    cout << "String2" << endl;
    cout << "3*\tString" << endl;
    cout << '1';
    cout << "Зміна коду";
    return 0;
}
