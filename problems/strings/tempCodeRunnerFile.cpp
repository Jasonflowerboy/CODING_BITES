#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    string t;
    getline(cin,s);
    cin.ignore();
    getline(cin,s);
    sort(s.begin(),s.end());
    sort(t.begin(), t.end());
    if(s == t)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}