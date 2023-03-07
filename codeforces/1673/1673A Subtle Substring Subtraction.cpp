/*
    author    : MishkatIT
    created   : Tuesday 2023-03-07-19.50.46
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int len = str.length();
        map<char, int> mp;
        for(char c = 'a', j = 1; c <= 'z'; c++)
        {
            mp[c] = j++;
        }
        int bob = 0, alice = 0;
        if(len == 1)
        {
            bob = mp[str[0]];
        }
        else
        {
            for(auto &i: str)
                alice += mp[i];
            if(len & 1)
            {
                if(str.front() > str.back())
                {
                    alice -= mp[str.back()];
                    bob += mp[str.back()];
                }
                else
                {
                    alice -= mp[str.front()];
                    bob += mp[str.front()];
                }
            }
        }
        if(bob > alice)
            cout << "Bob";
        else
            cout << "Alice";
        cout << ' ' << abs(bob - alice) << '\n';
    }
    return 0;
}

