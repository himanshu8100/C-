#include <iostream>
using namespace std;

class Test
{
    private:
        int d;

    public:

       Test():d(2){}
       Test(int a):d(a){}

       void operator ++(int)     //post increment
       {
          d++;
        }

       void operator ++()        //pre increment
       {
           ++d;
       }

       void display()
       {
           cout<< d <<endl;
       }
};

 int main()
 {
      Test o1, o2(5),o3(0);

      o1.display();
      o2.display();
      ++o1;
      o1.display();

      return 0;
 }


