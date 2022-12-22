/*
    author    : MishkatIT
    created   : Thursday 2022-12-22-20.48.13
    problem   : A. Infinite Sequence
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long n;
    cin >> n;
    int ans;
    for (int i = 1; n > 0; i++)
    {
        ans = n;
        n -= i;
    }
    cout << ans;
    return 0;
}

