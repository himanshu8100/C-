//sum of natural numbers using recursion


#include <iostream>

using namespace std;

int sum (int a);

int main()
{
    int n;
    cout<< "Enter the value of n"<<endl;
    cin>> n;
    cout<< "sum of "<<n << " natural numbers is : " << sum(n) << endl;    
    
    return 0;
}

int sum(int a){
    int temp=0;
    if (a!=0)
       temp = a + sum(a-1);
    
    return temp;	 
}

