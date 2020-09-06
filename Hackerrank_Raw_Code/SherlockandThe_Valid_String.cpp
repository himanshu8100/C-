#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    vector <int> a(26,0);
    int f2=0,n1=0,n2=0;
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }

    for(int i=0;i<a.size();i++){
        if (n1==0) n1=a[i];
            
        else if((a[i]!=0 && a[i]!=n1) && n2==0){
            n2=a[i];
            f2++;
        }
        else if(n2==a[i]&&a[i]!=0){
            f2++;
        }
        
        if(f2>1||((n1!=a[i]&&n2!=a[i])&&a[i]!=0)) return "NO";
    }
    if (abs(n2-n1)==1||n2<2) return "YES";
    else return "NO"; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
