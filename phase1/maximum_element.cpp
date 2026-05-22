#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    int maxi = INT_MIN;
    for(int i=0; i<v.size();i++)
    {
        if(v[i]>maxi)
        {
            maxi = v[i];
        }
    }
    cout << maxi;
}