#include <iostream>

using namespace std;

void argumenty(int argc, char* argv[]) {
	cout << "Liczba argumentow: " << argc << endl;
	for (int i = 0; i < argc; ++i) {
		cout << "Element numer " << i << " wiersza polecen ma wartosc: " << argv[i] << endl;
	}
}

int main(int argc, char* argv[]) {
	argumenty(argc, argv);
	return 0;
}