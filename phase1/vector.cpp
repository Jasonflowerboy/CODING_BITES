#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main (void)
{
    vector<int> v = {10, 20, 30};
    cout << v[0] << endl;
    cout << v.at(0) << endl;

    vector<int>::iterator it = v.begin();
    cout << *it << endl;
    vector<int>::iterator it2 = v.end();
    cout << *it2 << endl; //points to memory location after the last element
    vector<int>::reverse_iterator it3 = v.rend();
    cout << *it3 << endl; // points to memory location before the first element.
    vector<int>::reverse_iterator it4 = v.rbegin();
    cout << *it4 << endl;
    it4++;
    cout << *it4 << endl;
    vector<int> v2 = {10,20,30,40,50};
    for(int i=0; i<v2.size(); i++)
    {
        cout << v2[i] << " " ;
    }
    cout << endl;

}