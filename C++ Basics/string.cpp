#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    //cin.get(str, 100);

    cin >> str;
    cout << "You entered: "<<str<<endl;

    return 0;
}

//Output

/*Enter a string: C++
 You entered: C++

 Enter another string: Programming is fun.
 You entered: Programming

 This is because the extraction operator >> works as scanf() in C and considers a space " " has a terminating character.
 To read the text containing blank space, cin.get(str name, size); function can be used in place of cin>>str
 getline(cin, str); can also be used if size is not specified*/

