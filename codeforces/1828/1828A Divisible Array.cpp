/*
    author    : MishkatIT
    created   : Monday 2023-05-15-00.46.52
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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cout << i * 2 << ' ';
        cout << '\n';
    }
    return 0;
}
