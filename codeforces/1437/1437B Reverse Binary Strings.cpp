/*
    author    : MishkatIT
    created   : Monday 2023-07-03-20.03.09
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if(str[i] == str[i - 1])
                ans++;
        }
        cout << (ans + 1) / 2 << '\n';
    }
    return 0;
}

