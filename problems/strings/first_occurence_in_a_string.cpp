#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string haystack;
    string needle;
    getline(cin, haystack);
    getline(cin, needle);
    int m = haystack.size();
    int n = needle.size();
    if(n == 0)
    {
          cout << "0";
          return 0;
    }
    if(n>m)
    {
        cout << "-1";
        return 0;
    }
    for(int i=0; i<m; i++)
    {
        if(haystack[i] == needle[0])
        {
            if(haystack.substr(i,n) == needle)
            {
                cout << i;
                return 0;
            }
        }
    }
    cout << "-1";
    return 0;
}

/*Find the Index of the First Occurrence in a String

You are given two strings:

haystack
needle

Your task is to find the index of the first occurrence of needle inside haystack.

If needle is not found, print:

-1

Indexing is 0-based.

Input Format
First line contains string haystack
Second line contains string needle

Both strings may contain lowercase English letters.

Constraints
1 <= haystack.length(), needle.length() <= 10^5
Output Format

Print a single integer representing:

first index where needle occurs
OR
-1 if not found.
Sample Input 1
sadbutsad
sad
Sample Output 1
0
Explanation

sad first appears at index:

0
Sample Input 2
leetcode
leeto
Sample Output 2
-1
Explanation

leeto does not exist inside leetcode.

Sample Input 3
mississippi
issip
Sample Output 3
4
Your task

Write a FULL HackerRank-style program:

take input
search substring
print first occurrence index*/