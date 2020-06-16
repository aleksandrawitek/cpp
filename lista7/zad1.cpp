#include <iostream>

using namespace std;

class Dwa 
{
    public:
        Dwa() 
        {
            cout << "Kolejnosc ";
        }
        ~Dwa() 
        {
            cout << endl;
        }
};

class Trzy 
{
    public:
        Trzy() 
        {
            cout << "i ";
        }
        ~Trzy() 
        {
            cout << "obiektów ";
        }
};

class Cztery
{
    public:
        Cztery()
        {
            cout << "konstrukcji ";
        }
        ~Cztery()
        {
            cout << "logiczna ";
        }
};

class Raz : public Dwa 
{
    public:
    Raz() 
    {
        Trzy trzy;
        cout << "destrukcji ";
    }
    ~Raz() 
    {
        cout << "jest ";
    }
    Cztery _cztery;
};

int main()
{
    Raz raz;
    return 0;
}