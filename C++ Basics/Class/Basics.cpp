#include <iostream>
using namespace std;

class Test                // class is structure with functions
{
    private:              //can't access private from main this concept in OOPS is called data hiding.
        int data1;        // data1 and data2 are attributes of class Test
        float data2;

    public:               // use functions to access private data

       void insertIntegerData(int d)  //functions are methods of class Test
       {
          data1 = d;
          cout << "Number: " << data1;
        }

       float insertFloatData()
       {
           cout << "\nEnter data: ";
           cin >> data2;
           return data2;
        }
};

 int main()
 {
      Test o1, o2;         // o1 and o2 are objects of class Test
      float x;             //variable to access o2.data2

      o1.insertIntegerData(12);
      x=o2.insertFloatData();

      cout << "You entered " << x;
      return 0;
 }

 // private and public are called access control operators

