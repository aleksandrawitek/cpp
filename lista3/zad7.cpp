#include <iostream>
using namespace std;

int nwd(int x, int y) 
{
	if (x == 0 || y == 0)  //spojnik logiczny lub a nie i
    {
		return -1;
	}
	x = abs(x);
	y = abs(y);
	while (x != y) 
    {
		if (x > y) 
        {
			x -= y;
		}
		else 
        {
			y -= x;
		}
	}
	return x;
}

int main()
{
	cout << nwd(10,20) << endl;;
	return 0;
}