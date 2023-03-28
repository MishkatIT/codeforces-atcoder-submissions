/*
    author    : MishkatIT
    created   : Wednesday 2023-03-29-01.09.58
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

long long minimum(long long a, long long b, long long x, long long y, long long n)
{
    long long dif = a - x;
    long long mn = min(dif, n);
    a -= mn;
    n -= mn;
    dif = b - y;
    mn = min(dif, n);
    b -= mn;
    return a * b;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        cout << min(minimum(a, b, x, y, n), minimum(b, a, y, x, n)) << '\n';
    }
    return 0;
}
