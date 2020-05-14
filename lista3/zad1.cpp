#include <iostream>
#include <vector>

using namespace std;

//g++ -std=c++11 <filename> kompilacja 

void print(vector<int> vector)
{
    if (vector.size() == 0)
    {
        cout << "Ten wektor nie ma elementow";
    }
    else
    {
	    for (int i = 0; i < vector.size(); i++) 
        {
		    cout << vector.at(i) << ' ';
        }
	}

    cout << endl;
}

int minimum(vector<int> vector)
{
    if (vector.size() == 0)
    {
        return INT_MIN;
    }
    else 
    {
        int min;
        min = *min_element(vector.begin(), vector.end());
        return min;
    }
}

int main()
{
    vector<int> v={};//sprawdzenie czy dziala dla pustego wektora
    cout << "Wektor v: " << endl;
    print(v);
    cout << "Najmniejsza wartość wektora:" << endl;
    cout << minimum(v) << endl;
    vector<int> x={2,3,4,5,7,10,1};
    cout << "Wektor x: " << endl;
    print(x);
    cout << "Najmniejsza wartość wektora:" << endl;
    cout << minimum(x) << endl;
    return 0;
}