#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string tekst;
    string pomocniczy;


    cout << "Proszę podac tekst do zaszyfrowania: " << endl;
    getline(cin, tekst);
    int a;
    a = tekst.size();
    
    for (int i = 0; i <= a-1; i++)
    {
        char b;
        b = tekst[i];
        b += 13;
        pomocniczy += b;
    }

    ofstream zad5("zad5.txt");
    zad5 << pomocniczy;

}