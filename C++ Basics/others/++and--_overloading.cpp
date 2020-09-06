#include<iostream>
using namespace std;

class OP{
private:
    int i;
public:
    OP(int j=0):i(j){}

    OP operator ++(){
    ++i;
    OP temp;
    temp.i=i;
    return temp;
    }
    // int inside barcket indicates postfix decrement.
    OP operator ++(int){
    OP temp;
    temp.i=i++;
    return temp;
    }

    void display(){
    cout<< i<< endl;
    }
    };

int main(){
OP u(5);
OP v;

v = u++;


u.display();
v.display();

return 0;
}
