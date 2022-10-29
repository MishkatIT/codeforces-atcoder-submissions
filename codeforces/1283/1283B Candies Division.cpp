/*
    author    : MishkatIT
    created   : Saturday 2022-10-29-18.59.21
    problem   : 1283 B. Candies Division
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << (long long)(k * (n / k) + min ((k / 2), (n % k))) << '\n';;
    }

    return 0;
}



