#include <iostream>
#include <vector>

using namespace std;

//g++ -std=c++11 <filename> kompilacja 

void print(vector<double> vector)
{
	for (int i = 0; i < vector.size(); i++) 
    {
		cout << vector.at(i) << ' ';
	}

    cout << endl;
}

void zeruj(vector<double> vector)
{
    int n;
    n = vector.size();
    for(int i=0; i<n; i++)
    {
        vector[i] = 0;
    }

    print(vector);
}

int main()
{
    vector<double> v={2,3,4,5,7,10,1};
    cout << "Poczatkowy wektor: " << endl;
    print(v);
    cout << "Wyzerowany: " << endl;
    zeruj(v);
    
    return 0;
}