/*
    author    : MishkatIT
    created   : Wednesday 2023-04-26-13.13.24
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n, x, y;
    cin >> n >> x >> y;
    string str;
    cin >> str;
    int ans = 0;
    for (int i = n - 1; i >= (n - x); i--)
    {
        if(i == (n - y - 1))
        {
            if(str[i] != '1')
                ans++;
        }
        else
            ans += str[i] == '1';

    }
    cout << ans << '\n';
    return 0;
}

