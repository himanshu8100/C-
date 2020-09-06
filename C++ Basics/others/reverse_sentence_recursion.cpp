//string reverse using recursion


#include <iostream>
#include <cstring>

using namespace std;

void rev (const string& a);

int main()
{
    string a= "gnirts desrever";

    rev(a);

    return 0;
}

void rev(const string& a){
    int b=a.size();
    if(b==1)
        cout<<a;
    else{
        cout <<a[b-1];
        rev(a.substr(0,b-1));
    }

}
