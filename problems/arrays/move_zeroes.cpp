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



/*Move Zeroes

You are given an integer array of size n.

Your task is to move all 0s to the end of the array while maintaining the relative order of the non-zero elements.

You must perform the operation in-place.

Input Format
First line contains an integer n — size of the array.
Second line contains n space-separated integers.
Constraints
1 <= n <= 10^5
-10^9 <= arr[i] <= 10^9
Output Format

Print the modified array after moving all zeroes to the end.

Sample Input 1
5
0 1 0 3 12
Sample Output 1
1 3 12 0 0
Sample Input 2
4
0 0 1 2
Sample Output 2
1 2 0 0
Sample Input 3
5
1 2 3 4 5
Sample Output 3
1 2 3 4 5
Explanation

Since there are no zeroes, array remains unchanged.

Your task

Write a FULL HackerRank-style program:

take input
store vector
move zeroes
print final array*/