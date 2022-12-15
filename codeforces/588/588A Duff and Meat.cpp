/*
    author    : MishkatIT
    created   : Friday 2022-12-16-04.30.39
    problem   : A. Duff and Meat
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    long long mn = LONG_MAX;
    long long a, b, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(b < mn)
            mn = b;
        ans += (a * mn);
    }
    cout << ans;

    return 0;
}

