/*
    author    : MishkatIT
    created   : Friday 2022-12-09-03.03.56
    problem   : 1345 B. Card Constructions
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        int ans = 0;
        while(n > 1)
        {
            long long x = 0, i = 0, j = 1;
            while((i * 3 + j * 2) <= n)
            {
                x++;
                i += x;
                j++;
            }
            ans++;
            n -= ((i - x) * 3 + (j - 1) * 2);
        }
        cout << ans << '\n';
    }
    return 0;
}

