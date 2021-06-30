#include <iostream>

using namespace std;

int main() {

	cout << "First line of endl" << endl;
	cout << "Second line of endl" << endl;

	cout << "First line of flush" << flush;
	cout << "Second line of flush" << flush; //flush does not create a new line feed unlike endl

	return 0;
}
