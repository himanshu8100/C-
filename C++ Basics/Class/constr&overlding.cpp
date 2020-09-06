#include <iostream>
using namespace std;

class React                // class is structure with functions
{
    private:              //can't access private from main this concept in OOPS is called data hiding.
        int len;        // data1 and data2 are attributes of class Test
        int width;

    public:               // use functions to access private data

	React( ): len(6),width(3){}

	React(int a, int b): len(a),width(b){}

	int area()  //functions are methods of class Test
       {  int temp;
          temp = len * width;
          return temp;
        }

};

 int main()
 {
      React o1, o2(2,4);

      cout<< o1.area()<< endl;
      cout<< o2.area()<< endl;

      return 0;
 }

// we can directly copy contect of one object to other
// Area A3(A2); OR
// Area A3=A2;
