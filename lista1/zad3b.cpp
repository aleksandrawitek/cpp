#include <iostream>
#include <math.h>
using namespace std;
long double t(int n)
{
    if (n == 0)
        return 1/(pow(3,0.5));
   
    return (t(n-1))/((pow(((pow(t(n-1),2)) + 1), 0.5)) + 1);
}

int main()
{
    long double p;
    for (int i=0;i<=30;i++)
    {
        p = pow(2,i);
        p = 6 * p;
        p = p * t(i);
        cout << i << ". " << p << endl;
    }
 
    return 0;
}
