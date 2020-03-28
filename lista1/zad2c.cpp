#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float suma = 0;
    float k;
    for(int j=1; j<=1000000; j++)
    {
        k = 1/(pow((2*j-1),2));
        suma += k;
    }

    suma = 8*suma;
    suma = pow(suma,0.5);
    cout << suma << endl;
    return 0;
}