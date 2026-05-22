#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    string t;
    getline(cin,s);
   // cin.ignore();
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(), t.end());
    if(s == t)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}


/*Valid Anagram

You are given two strings s and t.

Your task is to determine whether t is an anagram of s.

Two strings are called anagrams if:

they contain the same characters
with the same frequency
regardless of order

Print:

"YES" if they are anagrams
"NO" otherwise
Input Format
First line contains string s
Second line contains string t

Both strings contain only lowercase English letters.

Constraints
1 <= s.length(), t.length() <= 10^5
Output Format

Print:

YES

if the strings are anagrams, otherwise print:

NO
Sample Input 1
anagram
nagaram
Sample Output 1
YES
Sample Input 2
rat
car
Sample Output 2
NO
Sample Input 3
listen
silent
Sample Output 3
YES
Your task

Write a FULL HackerRank-style program:

take input
compare strings
print answer*/