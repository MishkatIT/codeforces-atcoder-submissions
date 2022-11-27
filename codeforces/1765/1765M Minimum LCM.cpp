/*
    author    : MishkatIT
    created   : Sunday 2022-11-27-22.01.08
    problem   : 1765 M. Minimum LCM
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;

bool prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        if(prime(n))
            cout << 1 << ' ' << n - 1 << '\n';
        else
        {
            for (int i = 2; i * i <= n; i++)
            {
                if(n % i == 0)
                    {
                        cout << n / i << ' ' << n - (n / i) << '\n';
                        break;
                    }
            }
        }
    }

    return 0;
}



