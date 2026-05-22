#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k;
    cin >> n >> k;
    k = k%n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];

    //1. make a temp array
    vector<int> temp;
    for(int i=0; i<k; i++)
    {
        temp.push_back(v[i]);
    }
    //2.shifting
    for(int i=k; i<n; i++)
    {
        v[i-k] = v[i];
    }
    //3. putting back the temp 
    int j = 0; //indexing for temp array.
    for(int i = n-k; i<n; i++)
    {
        v[i] = temp[j++];
    }

    for(int i=0; i<n; i++)
    cout << v[i] << " ";
    return 0;
}


/*Left Rotate Array by K Positions

You are given an integer array of size n and an integer k.

Your task is to rotate the array to the left by k positions.

In a left rotation:

elements shift toward the left
elements that move out from the beginning are placed at the end
Input Format
First line contains two integers:
n k
Second line contains n space-separated integers.
Constraints
1 <= n <= 10^5
0 <= k <= 10^5
-10^9 <= arr[i] <= 10^9
Output Format

Print the rotated array.

Sample Input 1
5 2
1 2 3 4 5
Sample Output 1
3 4 5 1 2
Explanation

After rotating left by 2 positions:

1 2 3 4 5
↓
3 4 5 1 2
Sample Input 2
7 3
10 20 30 40 50 60 70
Sample Output 2
40 50 60 70 10 20 30
Sample Input 3
4 4
1 2 3 4
Sample Output 3
1 2 3 4
Explanation

Rotating by array size results in same array.

Your task

Write a FULL HackerRank-style program:

take input
rotate array left by k
print final array*/