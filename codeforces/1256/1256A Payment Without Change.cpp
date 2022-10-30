/*
    author    : MishkatIT
    created   : Sunday 2022-10-30-22.42.01
    problem   : 1256 A. Payment Without Change
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        if(s - min(a, s / n) * n <= b)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
