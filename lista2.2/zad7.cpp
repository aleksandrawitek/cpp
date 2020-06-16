#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(256);
    string s;
    cout << "Wpisz swoj tekst: " << endl;
    getline(cin,s);
    cout << "Jaka litere ma zliczac? " << endl;
    char a;
    cin >> a;
    cout << endl;
    for (int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        v[c]++;
    }
    for (int i =0; i <256; ++i)
    {
        if(v[i] != 0 and isgraph(i))
        {
            char c = a;
            cout << c << ':' << v[i] << '\t';
            
        }
         
    }
    cout << endl;
}