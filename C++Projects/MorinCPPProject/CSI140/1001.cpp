#include <iostream>
#include <sstream> // Stringstream class
using namespace std;

int maine() {

    int x;
    cin >> x;
    int y;
    cin >> y;
    int z = x + y;

    stringstream stream; // Create instance of stringstream
    stream << z; // Put last integer into stringstream instance.
    string a; // Declare a to be a string for the final integer.
    stream >> a; // Put stream into the final string.

    cout << "X = " + a + "\n";

    return 0;
}