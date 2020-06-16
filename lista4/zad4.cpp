#include <iostream>

using namespace std;

int main()
{
    double tab[10];
    double x;
    cout <<  &x << "\t" << &tab[-1] << "\n";
    return 0;
}

//0x7ffee4049780	0x7ffee4049788 w moim przypadku zostal wyprodukowany nastepujacy wynik
// wychodzenie poza zakres tablicy moze powodowac blad krytyczny lub nadpisac pamiec