#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];

    int i=0;
    while(i<n && v[i]!=0)
    {
        i++; //finds first zero if it exists.
    }
    for(int j=i+1; j<n; j++)
    {
        if(v[j] != 0)
        {
            swap(v[i], v[j]);
            while(i<n && v[i] != 0)
            {
                i++;
            }
        }
    }


    //final output printing : 
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
   }
   return 0;
}