#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];

    int height,weight,water;
    int max_water = INT_MIN;
    for(int i=0; i<= n-2; i++)
    {
        for(int j=i+1; j<n;j++)
        {
            weight = j-i;
            height = min(v[i], v[j]);
            water = height*weight;
            max_water = max(max_water,water);
        }
    }
    cout << max_water;
    return 0;
}


/*Container With Most Water

You are given an array of integers where each element represents the height of a vertical line drawn on the x-axis.

Find two lines that together form a container such that the container holds the maximum amount of water.

The amount of water a container can store is calculated as:

width × minimum height

where:

width = distance between the two lines
height = smaller of the two heights

Print the maximum water that can be stored.

Input Format
First line contains an integer n — size of the array.
Second line contains n space-separated integers representing heights.
Constraints
2 <= n <= 10^5
0 <= height[i] <= 10^4
Output Format

Print a single integer representing the maximum amount of water.

Sample Input 1
9
1 8 6 2 5 4 8 3 7
Sample Output 1
49
Explanation

Choose:

8 and 7

Width:

7

Minimum height:

7

Water stored:

7 × 7 = 49
Sample Input 2
2
1 1
Sample Output 2
1
Sample Input 3
5
4 3 2 1 4
Sample Output 3
16
Your task

Write a FULL HackerRank-style program:

take input
find maximum water
print answer*/