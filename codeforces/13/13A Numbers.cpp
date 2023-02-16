/*
    author    : MishkatIT
    created   : Friday 2023-02-17-02.01.32
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int ans = 0;
    int tot = 0;
    for (int i = 2; i < n; i++)
    {
        tot++;
        int temp = n;
        while(temp)
        {
            ans += (temp % i);
            temp /= i;
        }
    }
    int gcd = __gcd(ans, n - 2);
    cout << ans / gcd<< '/' << tot / gcd;
    return 0;
}

