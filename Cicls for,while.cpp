#include <iostream>
using namespace std;

int main()
{
    for (int z = 0; z <= 5;z++) {
        cout << z << " ";
    }

    cout << endl;

    for (int z = 1; z <= 5;z++) {
        cout << z << endl;
    }
    cout << endl;

    int x = 10;

    while (x < 50)
    {
        cout << x << " ";
        x = x + 100 - 90;
    }
    cout << endl;

    int c = 0;

    do {
        cout << c << " ";
        c = c + 100;
    } while (c <= 1000);

    cout << endl;

    int c1 = 4321;

    do {
        cout << c1 << " ";
        c1 = c1 + 50;
    } while (c1 <= 1000);
}
