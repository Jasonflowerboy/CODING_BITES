#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int mini = INT_MAX;
    int profit = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i] < mini){
            mini = v[i];
        }
        profit = max(profit, v[i] - mini);
    }
    cout << profit;
    return 0;
}

/*Best Time to Buy and Sell Stock

You are given an array of integers representing the price of a stock on different days.

Your task is to find the maximum profit you can achieve by:

buying the stock on one day
and selling it on a later day

You may complete at most ONE transaction.

If no profit can be made, print 0.

Input Format
First line contains an integer n — size of the array.
Second line contains n space-separated integers representing stock prices.
Constraints
1 <= n <= 10^5
0 <= prices[i] <= 10^4
Output Format

Print a single integer representing the maximum possible profit.

Sample Input 1
6
7 1 5 3 6 4
Sample Output 1
5
Explanation

Buy at:

1

Sell at:

6

Profit:

6 - 1 = 5
Sample Input 2
5
7 6 4 3 1
Sample Output 2
0
Explanation

Prices always decrease, so no profit can be made.

Your task

Write a FULL HackerRank-style program:

take input
store vector
calculate answer
print output*/