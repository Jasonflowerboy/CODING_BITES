#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    string ans = "";

    for(int i = 0; i < v[0].size(); i++)
    {
        char ch = v[0][i];

        bool match = true;

        for(int j = 1; j < n; j++)
        {
            if(i >= v[j].size() || v[j][i] != ch)
            {
                match = false;
                break;
            }
        }

        if(match)
            ans += ch;
        else
            break;
    }

    if(ans == "")
        cout << -1;
    else
        cout << ans;

    return 0;
}