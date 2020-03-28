#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float suma = 0;
    float k;
    for(int j=1; j<=1000000; j++)
    {
        k = pow((-1),(j+1))/(2*j-1);
        suma += k;
    }

    suma = 4*suma;
    cout << suma << endl;
    return 0;
}
