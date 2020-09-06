#include<iostream>

using namespace std;

class Margin;

class Complex {
private:
    int a;
    int b;
public:
    Complex(){a=1;b=1;
    }
    Complex(int x, int y){
    a=x; b=y;
    }
    void display(){
    cout<< "a= "<<a<<"  b= "<<b<<endl;
    }

    friend ostream& operator<<(ostream& ,Complex);
    };


    ostream& operator<<(ostream& dout,Complex c){
    cout<< "a= "<<c.a<<"  b= "<<c.b<<endl;
    return dout;
    }


int main(){
Complex c1,c2(4,3);

cout<< c2;   //cout.operator<<(c2)


}
