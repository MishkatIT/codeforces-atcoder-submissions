/*
    author    : MishkatIT
    created   : Tuesday 2023-05-09-22.42.38
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
        int ans = 1e9;
        for (int i =  1; i * i <= n; i++)
        {
            ans = min(ans, ((i - 1) + (n - 1) / i));
        }
        cout << ans << '\n';
    }
    return 0;
}

