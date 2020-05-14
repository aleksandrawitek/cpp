#include <iostream>
#include <math.h> //przyda się ta biblioteka do arcsin
using namespace std;

int main()
{
    float x;
    float y;
    float r;
    float alfa;
    float sinus;

    cout << "Podaj wspolrzedna x:" << endl;
    cin >> x;
    cout << "Podaj wspolrzedna y:" << endl;
    cin >> y;

    r = pow((x*x)+(y*y),(0.5)); //wzor na odleglosc punktu od srodka ukladu wspolrzednych

    cout << "Odleglosc od punktu (0,0): " << r << endl;

    sinus = y/r;

    alfa = asin(sinus) * 180 / M_PI ;

    cout << "Kąt miedzy osią x a ramieniem: " << alfa << " stopni." << endl;
    
    return 0;
}