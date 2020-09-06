#include<iostream>
using namespace std;

struct num{
int real;
int img; }n1,n2,sum;

num add(num a1, num a2){
num sum;
sum.real= a1.real+ a2.real;
sum.img= a1.img+a2.img;
return sum;
}


int main(){
n1.real=3;
n1.img=7;
n2.real=5;
n2.img=1;

sum= add(n1,n2);
cout<< sum.real<<"+i" << sum.img;
}
