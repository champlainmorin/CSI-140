#include <iostream>
using namespace std;

int main() {

    float value;
    cin >> value;
    cout << endl;

    int hundred;
    int fifty;
    int twenty;
    int ten;
    int five;
    int two;

    // << fixed << setprecision(3)

    hundred = int(value / 100);
    cout << hundred << endl;
    value -= (hundred * 100);

    fifty = int(value / 50);
    cout << fifty << endl;
    value = value - (fifty * 50);

    twenty = int(value / 20);
    cout << twenty << endl;
    value = value - (twenty * 20);

    ten = int(value / 10);
    cout << ten << endl;
    value = value - (ten * 10);

    five = int(value / 5);
    cout << five << endl;
    value = value - (five * 5);

    two = int(value / 2);
    cout << two << endl;
    value = value - (two * 2);


    return 0;
}