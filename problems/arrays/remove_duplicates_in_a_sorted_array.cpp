#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];

    vector<int> unique;
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        if(mp.find(v[i]) == mp.end()) //not found in map
        {
            unique.push_back(v[i]);
            mp[v[i]]++;
        }
        mp[v[i]]++;
    }
    cout << unique.size() << endl;
    for(int i=0; i<unique.size();i++)
    cout << unique[i] << " ";
    return 0;
}

/*Remove Duplicates from Sorted Array

You are given a sorted integer array of size n.

Your task is to remove the duplicates in-place such that each unique element appears only once.

After removing duplicates:

print the number of unique elements
print the modified array containing only unique elements

The relative order of elements must remain the same.

Input Format
First line contains an integer n — size of the array.
Second line contains n space-separated sorted integers.
Constraints
1 <= n <= 10^5
-10^9 <= arr[i] <= 10^9

The array is guaranteed to be sorted in non-decreasing order.

Output Format
First line: print the number of unique elements.
Second line: print the modified array containing only unique elements.
Sample Input 1
7
1 1 2 2 3 4 4
Sample Output 1
4
1 2 3 4
Sample Input 2
5
1 2 3 4 5
Sample Output 2
5
1 2 3 4 5
Sample Input 3
6
0 0 1 1 1 2
Sample Output 3
3
0 1 2
Your task

Write a FULL HackerRank-style program:

take input
remove duplicates in-place
print count of unique elements
print modified array*/