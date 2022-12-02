/*
    author    : MishkatIT
    created   : Saturday 2022-12-03-00.07.28
    problem   : 268 mB. Buttons
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    long long ans = n;
    for(int i = n; i >= 1; i--)
        ans += (n - i) * i;
    cout << ans;
    return 0;
}

