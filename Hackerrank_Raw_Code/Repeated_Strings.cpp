#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
int count=0;
int b = n % s.size();
long int a = n/ s.size(); 
for(int i=0;i<s.size();i++){
    if (s[i]=='a')
    count++;
    if(i==b-1)
    b=count;
}
long long int result = a*count+b;
return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
