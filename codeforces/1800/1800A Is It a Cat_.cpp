/*
    author    : MishkatIT
    created   : Thursday 2023-03-02-20.34.30
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
    string s = "meow";
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        for(auto& i: str)
        {
            if(i <= 'Z')
                i += ('a' - 'A'); // i += 32;
        }
        string ans;
        for(auto& i: str)
        {
            if(ans.empty() || ans.back() != i)
                ans += i;
        }
        if(ans == s)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

