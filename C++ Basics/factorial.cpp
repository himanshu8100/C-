// A function that calls itself is known as recursive function and technique is known as recursion.

#include<iostream>
using namespace std;

int fact(int );

int main(){
    int n;
    cout<< "Enter the number : \n";
    cin>> n;

    cout<< "the factorial of "<<n << " is : "<< fact(n) << endl;
}

int fact (int i){
int f = 1;

if(i>1)
    f = i * fact(i-1);
return f;
}
