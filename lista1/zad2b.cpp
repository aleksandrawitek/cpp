#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float iloczyn = 1;
    float k;
    for(int j=1; j<=10000000; j++)
    {
        k = (4*(pow(j,2)))/(4*(pow(j,2))-1);
        iloczyn *= k;
    }

    iloczyn = 2*iloczyn;
    cout << iloczyn << endl;
    cout << iloczyn / M_PI << endl;
    return 0;
}
