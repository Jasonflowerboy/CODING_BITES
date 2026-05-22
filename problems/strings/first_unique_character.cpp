#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    getline(cin,s);
    unordered_map<char,int> mp;
    queue<int> q;
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if(mp.find(s[i]) == mp.end())
        q.push(i);
        mp[s[i]] ++;
        while(q.size()>0 && mp[s[q.front()]]>1)
        {
            q.pop();
        }
    }
    if(q.empty())
    {
        cout << -1;
    }
    else
    cout << q.front();
    return 0;
}


/*First Unique Character in a String

You are given a string s containing lowercase English letters.

Your task is to find the index of the first non-repeating character in the string.

If every character repeats, print:

-1

Indexing is 0-based.

Input Format
A single line containing the string s.
Constraints
1 <= s.length() <= 10^5
Output Format

Print a single integer representing:

index of first unique character
OR
-1 if no unique character exists.
Sample Input 1
leetcode
Sample Output 1
0
Explanation

Character:

l

appears only once.

Sample Input 2
loveleetcode
Sample Output 2
2
Explanation

Character:

v

is the first non-repeating character.

Sample Input 3
aabb
Sample Output 3
-1
Explanation

Every character repeats.

Your task

Write a FULL HackerRank-style program:

take input
count character frequencies
find first unique character
print index*/