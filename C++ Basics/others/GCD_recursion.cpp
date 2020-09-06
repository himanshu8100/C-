//GCD using recursion


#include <iostream>

using namespace std;

int gcd (int a, int b);

int main()
{
    int i,j ;
    cout<< "Enter the value of of i and j"<<endl;
    cin>> i >> j;
    
    cout<< "gcd of "<< i << " and " << j << " is : " << gcd (i,j) << endl;    
    
    return 0;
}

int gcd(int a, int b){
   int temp;
   
   if (a==b)
       temp =a;
    
    else{    
    if (a>b)
    a= a-b;
    else if(b>a)
    b=b-a;
    temp= gcd(a,b);
      
    }    
    
    return temp;	 
}
