#include <iostream>
#include <sstream> // Stringstream class
#include <iomanip>

using namespace std;

int main() {


    double a;
    cin >> a;
    double b;
    cin >> b;
    double c;
    cin >> c;


    double d = (int(((a * 2 + b * 3 + c * 5) / (2 + 3 + 5)) * 100) + 5) / 10;
    double e = d / 10;
    //double f = e/10;


    stringstream stream;
    stream << setprecision(3) << e;
    string g;
    stream >> g;

    if ()

        cout << "MEDIA = " + g + "\n";


    return 0;
}