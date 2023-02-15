/*
    author    : MishkatIT
    created   : Wednesday 2023-02-15-20.20.32
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
        long long n;
        cin >> n;
        cout << (n + 1) / 10 << '\n';
    }
    return 0;
}

