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
        bool ok = true;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            char temp = tolower(str[i]);
            if(temp == s[x]) continue;
            else if(i != x && x < 4 && temp == s[x + 1])
            {
                x++;
            }
            else
            {
                ok = false;
                break;
            }
        }
//        debug(x);
        if( x != 3) ok = false;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

