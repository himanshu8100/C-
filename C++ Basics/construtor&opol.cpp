#include<iostream>
using namespace std;

class OP{
private:
    int i;
public:
    OP(int j=0):i(j){}

    void operator ++(){
    ++i;
    }
    void display(){
    cout<< i<< endl;
    }
    };

int main(){
OP u(5);
OP v;

++u;
++v;

u.display();
v.display();

return 0;
}
