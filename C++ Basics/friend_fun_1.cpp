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
    friend Complex sum(Complex, Margin);
    };

class Margin {
private:
    int a;
    int b;
public:
    Margin(){a=2;b=5;
    }
    Margin(int x, int y){
    a=x; b=y;
    }
    friend Complex sum(Complex, Margin);
    };

    Complex sum (Complex c, Margin m){
    Complex temp;
    temp.a= c.a+m.a;
    temp.b= c.b+m.b;
    return temp;
    }


int main(){
Complex c1,c2(4,3),c3,c4;
Margin m1,m2(2,7);

c1.display();

c3=sum(c1,m1);
c4=sum(c2,m2);

c3.display();
c4.display();

}
