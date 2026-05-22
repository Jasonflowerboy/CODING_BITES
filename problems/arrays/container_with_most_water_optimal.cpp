#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];

    int i,j;
    i = 0;
    j = n-1;
    int height,width,water;
    int max_water = INT_MIN;
    while(i<j)
    {
        width = j-i;
        height = min(v[i],v[j]);
        water = height*width;
        max_water = max(max_water,water);
        if(v[i]<=v[j])
        i++;
        else
        j--;
    }
    cout << max_water;
    return 0;
}