/*
    author    : MishkatIT
    created   : Tuesday 2022-12-27-20.40.54
    problem   : A. Joey Takes Money
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a;
        int sum = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum *= a;
        }
        cout << (sum + n - 1) * 2022 << '\n';
    }
    return 0;
}

