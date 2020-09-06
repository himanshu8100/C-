#include <iostream>
using namespace std;

int main()
{
    float arr[5];
    float *ptr;

    cout << "Displaying address using arrays: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    ptr = &arr[0];

    cout<<"\nDisplaying address using pointers: "<< endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    cout<<"\nDisplaying address using arr pointers: "<< endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "arr + " << i << " = "<< arr + i << endl;
    }

    return 0;
}

//we can replace *ptr with arr(arr also represent address of arr[0])
