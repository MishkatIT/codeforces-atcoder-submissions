/*
    author    : MishkatIT
    created   : Monday 2023-05-08-18.29.19
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

bool isPalindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n/2; i++)
    {
        if (s[i] != s[n-i-1])
        {
            return false;
        }
    }
    return true;
}

int longest(string s)
{
    int n = s.length();
    int maxLength = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            string sub = s.substr(i, j-i);
            if (!isPalindrome(sub))
            {
                maxLength = max(maxLength, (int)sub.length());
            }
        }
    }
    return maxLength;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        cout << longest(str) << '\n';
    }
    return 0;
}
