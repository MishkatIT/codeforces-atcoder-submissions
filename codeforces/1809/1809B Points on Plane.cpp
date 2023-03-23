/*
    author    : MishkatIT
    created   : Thursday 2023-03-23-23.59.38
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

long long Sroot(long long n)
{
    long long a = sqrt(n) + 2;
    while(a * a > n)
        a--;
    return a;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << Sroot(n - 1LL) << '\n';
    }
    return 0;
}

