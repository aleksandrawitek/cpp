#include <iostream>
#include <vector>

using namespace std;

vector<double> operator* (vector<double> v, vector<double> w)
{

   vector<double> iloczyn (v.size());

    for (int i = 0; i < v.size(); i++)
    {
        iloczyn[i] = v[i]*w[i];
    }
    
    return iloczyn;

}

void print(vector<double> vector)
{
	for (int i = 0; i < vector.size(); i++) 
    {
		cout << vector.at(i) << ' ';
	}

    cout << endl;
}


int main()
{

    vector<double> v = {1, 2, 3, 4};
    vector<double> w = {5, 6, 7, 8};
    vector<double> u = v*w;
    cout << "Wektor v: " << endl;
    print(v);
    cout << "Wektor w: " << endl;
    print(w);
    cout << "Wektor u = v*w: " << endl;
    print(u);

    return 0;
}
