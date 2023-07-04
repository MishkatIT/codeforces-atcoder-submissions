/*
    author    : MishkatIT
    created   : Tuesday 2023-07-04-17.28.24
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int cnt = 0;
        for (int i = 0; i + 1 < str.length(); i++)
        {
            if(cnt == 0)
            {
                if(str[i] == str[i + 1] && str[i] == '1') cnt++, i++;
            }
            else if(str[i] == str[i + 1] && str[i] == '0')
            {
                cnt++;
                break;
            }
        }
        if(cnt == 2)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}

