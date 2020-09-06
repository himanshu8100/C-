#include <iostream>
using namespace std;

int main(){
string a[10]={"Java", "PHP", "Perl", "C", "C++", "Python", "R", "Matlab", "Ruby", "Javascript" };
string temp;

for (int i=0; i<9;i++){
    for (int j=i+1;j<10;j++){
        if (a[i]>a[j]){
         temp = a[i];
         a[i]=a[j];
         a[j]=temp;
        }
    }
}


cout<< *(a+4) << endl;
return 0;
}
