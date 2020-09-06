//express number as sum of two prime numbers 
#include <iostream>

using namespace std;

bool prime (int a);

int main()
{
    int a;
    cout<< "Enter the number"<<endl;
    cin>> a;
    
    for(int i=1;i<=a/2;i++){
    if (prime(i) & prime(a-i))
        cout<< a <<" is sum of prime numbers "<<i << " and " <<(a-i) << endl;
        
    }
    return 0;
}

bool prime(int a){
    bool pr = true;
    for(int i=2;i<=a/2;i++){
        if (a%i==0){
        pr= false;
        break;
        }
    }
    
    return pr;
}
