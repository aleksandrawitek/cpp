#include <iostream>
using namespace std;
int main ()
{
    int n = 40;
    int k = 0;
    
    for(int i = 0; i <= n; i++)
    {
		if (i == 0){ //przypadek dla 0!
		cout << k << "! = 1" << endl;
		k += 1;
		}
		else{ 
        k *= i;
        cout << i << "! = " << k << endl;
		}
    }

    return 0;
}

//bledne wyniki sa spowodowane ograniczona iloscia bitow dla zmiennej int
