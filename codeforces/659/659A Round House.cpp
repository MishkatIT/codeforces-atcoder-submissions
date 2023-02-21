/*
    author    : MishkatIT
    created   : Wednesday 2023-02-22-01.53.03
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n, a, b;
    cin >> n >> a >> b;
    int ans = a;
    ans += b;
    ans %= n;
    while(ans > n)
        ans -= n;
    while(ans <= 0)
        ans += n;
    cout << ans;
}

