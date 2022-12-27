/*
    author    : MishkatIT
    created   : Wednesday 2022-12-28-01.16.18
    problem   : A. Sweet Problem
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
        vector<long long> v(3);
        for (auto& i: v)
            cin >> i;
        long long mn = (v[0] + v[1] + v[2]) / 2;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                mn = min(mn, v[i] + v[j]);
            }
        }
        cout << mn << '\n';
    }
    return 0;
}

