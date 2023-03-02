/*
    author    : MishkatIT
    created   : Thursday 2023-03-02-21.32.17
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = n - 1;
        for (int i = 0; i + 2 < n; i++)
        {
            ans -= (str[i] == str[i + 2]);
        }
        cout << ans << '\n';
    }
    return 0;
}

