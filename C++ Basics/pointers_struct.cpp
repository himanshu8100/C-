#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    Distance *ptr, d;

    ptr = &d;

    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;

    cout << "Displaying information." << endl;
    cout << "Distance = " << d.feet << " feet " << d.inch << " inches";

    return 0;
}

//pointers can be used for structure just like int, float and double.
