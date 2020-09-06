#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
vector <int> x(26,0);
int cout=0;
for (int i=0;i<a.size();i++){
    x[a[i]-'a']++;}

for (int i=0;i<b.size();i++){
    x[b[i]-'a']--;} 

for (int i=0;i<x.size();i++){
    cout+=abs(x[i]);}
    
return cout;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
