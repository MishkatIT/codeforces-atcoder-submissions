/*
    author    : MishkatIT
    created   : Tuesday 2023-06-06-01.28.22
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
    int n, m;
    cin >> n >> m;
    string s = "BW";
    for (int i = 0; i < n; i++)
    {
        int toogle = 0;
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            if(x != '-')
            {
                x = s[toogle % 2];
            }
            ++toogle;
            cout << x;
        }
        swap(s[0], s[1]);
        cout << '\n';
    }
    return 0;
}

