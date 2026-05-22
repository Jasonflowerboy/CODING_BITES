#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int temp = v[0];
    for(int i=0; i<=n-2;i++)
    {
        v[i] = v[i+1];
    }
    v[n-1] = temp;

    for(int i=0; i<n; i++)
    cout << v[i] << " ";
    return 0;
}

/*Left Rotate Array by One

You are given an integer array of size n.

Your task is to perform a left rotation by 1 position.

In a left rotation:

the first element moves to the end
all other elements shift one position to the left
Input Format
First line contains an integer n — size of the array.
Second line contains n space-separated integers.
Constraints
1 <= n <= 10^5
-10^9 <= arr[i] <= 10^9
Output Format

Print the modified array after one left rotation.

Sample Input 1
5
1 2 3 4 5
Sample Output 1
2 3 4 5 1
Sample Input 2
4
10 20 30 40
Sample Output 2
20 30 40 10
Sample Input 3
1
7
Sample Output 3
7
Explanation

Array of size 1 remains unchanged.

Your task

Write a FULL HackerRank-style program:

take input
rotate array left by 1
print final array*/