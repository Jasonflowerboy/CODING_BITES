#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];

    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[v[i]]++;
    }
    for (auto x: mp)
    {
        if(x.second >= 2)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

/*Contains Duplicate

You are given an integer array.

Your task is to determine whether any element appears more than once in the array.

Print:

"YES" if any duplicate exists
"NO" otherwise
Input Format
First line contains an integer n — size of the array.
Second line contains n space-separated integers.
Constraints
1 <= n <= 10^5
-10^9 <= arr[i] <= 10^9
Output Format

Print:

YES

if duplicate exists, otherwise print:

NO
Sample Input 1
5
1 2 3 1 4
Sample Output 1
YES
Explanation

Element:

1

appears more than once.

Sample Input 2
5
1 2 3 4 5
Sample Output 2
NO
Explanation

All elements are unique.

Your task

Write a FULL HackerRank-style program:

take input
store vector
detect duplicates
print answer*/