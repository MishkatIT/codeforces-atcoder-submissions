/*
    author    : MishkatIT
    created   : Wednesday 2023-05-24-19.30.03
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << min({(a + b) / 3, a, b}) << '\n';
    }
    return 0;
}
// should be passed
