#include<iostream>
#include <cstdlib>
using namespace std;

void onlychar(string& j){
    int k=0;
    string newop;

for(int i=0;i<j.size();i++){
    if ( 'a'<j[i]&&j[i]<'z'){
    newop[k]=j[i];
    k++;
    cout<< j[i];}
}
cout<< newop;

}

int main(){
string a= "h127,i>:m";
string op;
onlychar(a);

return 0;
}
