#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p = {6,7};
    cout << p.first << " " << p.second << " ";
    pair<int , pair<int,int>> p2 = {10, {20, 30}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;
    pair <int,int> arr[] = {{1,2}, {3,4} , {5,6}};
    cout << " " << arr[0].second;
    return 0;
}