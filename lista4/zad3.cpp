#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    // program z tresci zadania

    int N = 1559500; //dla takiego N przyblizony czas trwania programu to sekunda
    auto poczatek = chrono::high_resolution_clock::now();
    for (unsigned n = 1; n <= N; ++n)
    {
        int* p = new int [n];
        delete [] p;
    }
    auto koniec = chrono::high_resolution_clock::now();
    auto trwanie = chrono::duration_cast<chrono::microseconds>(koniec - poczatek).count();
    cout << "Czas trwania programu: " << trwanie << endl; // 1 sekunda = 1 000 000 mikro sekund

    //dodawanie
    int suma = 0;
    auto poczatek1 = chrono::high_resolution_clock::now();
    for (unsigned n = 1; n <= N; ++n)
    {
        suma += 1;

    }
    auto koniec1 = chrono::high_resolution_clock::now();
    auto trwanie1 = chrono::duration_cast<chrono::microseconds>(koniec1 - poczatek1).count();
    cout << "Czas trwania dodawania: " << trwanie1 << endl;
    float roznica;
    roznica = abs(trwanie1 - trwanie);
    cout << "Roznica w czasie (mikrosekundy)" << roznica << endl;
    return 0;
}