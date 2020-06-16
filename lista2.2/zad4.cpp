#include <iostream>
#include <string>
using namespace std;


int main()
{
    string tekst;
    cout << "Prosze podac tekst: " << endl;
    getline(cin, tekst);
    cout << endl;
    int a;
    a = tekst.length();
    
    for (int i = a-1; i >= 0; --i)
    {
        cout << tekst[i];
    };
    cout << endl;
    return 0;
}