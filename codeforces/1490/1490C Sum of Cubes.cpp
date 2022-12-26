/*
    author    : MishkatIT
    created   : Monday 2022-12-26-20.10.10
    problem   : C. Sum of Cubes
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
        bool ok = false;
//        if(n != 1)
            for (long long i = 1; i * i * i < n; i++)
            {
                long double b = cbrt(n - pow(i, 3));
                if(b == (int)b)
                {
                    cout << "YES" << '\n';
                    ok = true;
                    break;
                }
            }
        if(!ok)
            cout << "NO" << '\n';
    }
    return 0;
}
