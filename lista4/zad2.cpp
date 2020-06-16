#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //podpunkt a)

    double (*p) [100];

    //podpunkt b)

    char const* q[5][5];

    //podpunkt c)

    char const* r[1];

    //podpunkt d)

    vector <void*> m;

    //podpunkt e)
    
    vector <double> n[4];

    //podpunkt f)

    double (*f)(double&, int);

    //podpunkt g)

    int *o;
    int y(*o);

    return 0;
}