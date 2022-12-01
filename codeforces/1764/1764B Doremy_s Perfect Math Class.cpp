/*
    author    : MishkatIT
    created   : Friday 2022-12-02-00.44.10
    problem   : 1764 B. Doremy's Perfect Math Class
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int euclidean(int a, int b)
{
    if(a == 0)
        return b;
    return euclidean(b % a, a);
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a;
        int gcd = 0;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            gcd = euclidean(gcd, a);
            mx = max (mx, a);
        }
        cout << mx / gcd << '\n';
    }
    return 0;
}

