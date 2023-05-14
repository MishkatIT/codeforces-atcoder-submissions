/*
    author    : MishkatIT
    created   : Sunday 2023-05-14-16.26.48
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int n;
    cin >> n;
    int ans = n;
    int last;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(i == 0)
            ans += x;
        else
            ans += abs(x - last) + 1;
        last = x;
    }
    cout << ans;
    return 0;
}

