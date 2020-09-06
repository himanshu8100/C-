#include <iostream>
using namespace std;

class Test              
{
    private:
        float data1;
        float data2;

    public:

       Test():data1(-4.0)data2(5.0){}
       Test(float a,float b):data1(a)data2(b){}
       
       void sum(Test c, Test d){
	    data1=c.data1 + d.data1;
	    data2=c.data2 + d.data2;
       }
       Test add(Test c, Test d){
	    Test temp;
	    temp.data1=c.data1 + d.data1;
	    temp.data2=c.data2 + d.data2;
	    return temp;
       }

       void display(Test e){
	    cout <<e.data1 <<"+i" <<e.data2 << endl;
       } 
};

 int main()
 {
      Test o1, o2(3.3,4.1), o3, o4;
      o3.sum(o1,o2);

      o4= add(o3,o2);

      display(o3);
      display(o4);
         
      
      return 0;
 }

//program to return from class function

