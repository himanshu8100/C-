#include <iostream>
using namespace std;

struct City {
    string name;
    int popu;
    float salary;
};

City getData(City);
void displayData(City);

int main()
{

    City c1;

    c1 = getData(c1);
    displayData(c1);

    return 0;
}

City getData(City p) {

    p.name="delhi";

    cout << "Enter popu: ";
    cin >> p.popu;

    cout << "Enter salary: ";
    cin >> p.salary;

    return p;
}

void displayData(City p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.popu << endl;
    cout << "Salary: " << p.salary;
}

// can't use reference concept with structure
