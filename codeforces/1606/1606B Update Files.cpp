/*
    author    : MishkatIT
    created   : Saturday 2023-05-13-21.39.23
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll p = 1, hours = 0;
        n--;
        while(n)
        {
            if(p < k)
            {
                n -= p;
                p *= 2;
                hours++;
            }
            else
            {
                hours += ceil((long double)n / k);
                break;
            }
        }
        cout << hours << '\n';
    }

    return 0;
}
