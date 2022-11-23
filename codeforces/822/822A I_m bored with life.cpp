/*
    author    : MishkatIT
    created   : Wednesday 2022-11-23-23.53.10
    problem   : 822 A. I'm bored with life
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;

    int a, b;
    cin >> a >> b;
    if(a > b)
        swap(a, b);
    int ans = 1;
    for (int i = 1; i <= a; i++)
        ans *= i;
    cout << ans << '\n';

    return 0;
}



