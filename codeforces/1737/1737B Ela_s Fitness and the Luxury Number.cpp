/*
    author    : MishkatIT
    created   : Thursday 2022-11-17-00.42.25
    problem   : 1737 B. Ela's Fitness and the Luxury Number
*/
#include<iostream>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long calc(long long n);
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long l, r;
        cin >> l >> r;
        cout << calc(r) - calc(l - 1) << '\n';
    }

    return 0;
}
long long calc(long long n)
{
    if (n == 0)
        return 0;
    long long r = sqrt((long double)n);
    return (r - 1) * 3 + (n - r * r) / r + 1;
}

