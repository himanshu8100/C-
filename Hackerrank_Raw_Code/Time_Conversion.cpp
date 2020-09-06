#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string temp;
    int h = stoi(s.substr(0,2));
    if(s.substr(8,2)=="PM"&& h!=12){
        h+=12;
        temp=to_string(h);
        temp += s.substr(2,6);
    }
    else if(s.substr(8,2)=="AM"&& h==12){
        temp="00";
        temp += s.substr(2,6);
    }
    else {
    temp += s.substr(0,8);
    }
    cout<<temp;
    return temp;
}
    
    
    
    
    

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
