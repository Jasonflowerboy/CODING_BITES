#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];
    int maxi = INT_MIN;
    int sum =0;
    for(int i=0; i<n; i++)
    {
        sum = sum + v[i];
        maxi = max(maxi, sum);
        if(sum<0)
        sum = 0;
    }
    cout << maxi;
    return 0;
}

/*Maximum Subarray

You are given an integer array of size n.

Your task is to find the contiguous subarray having the largest sum and print that maximum sum.

A subarray is a continuous part of the array.

Input Format
First line contains an integer n — size of the array.
Second line contains n space-separated integers.
Constraints
1 <= n <= 10^5
-10^4 <= arr[i] <= 10^4
Output Format

Print a single integer representing the maximum possible subarray sum.

Sample Input 1
9
-2 1 -3 4 -1 2 1 -5 4
Sample Output 1
6
Explanation

The subarray:

4 -1 2 1

has sum:

6

which is the maximum possible.

Sample Input 2
5
1 2 3 4 5
Sample Output 2
15
Explanation

Entire array gives maximum sum.

Sample Input 3
4
-2 -5 -1 -7
Sample Output 3
-1
Explanation

Largest element itself becomes maximum subarray.

Your task

Write a FULL HackerRank-style program:

take input
store vector
calculate maximum subarray sum
print answer*/