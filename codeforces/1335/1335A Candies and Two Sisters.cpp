/*
    author    : MishkatIT
    created   : Friday 2022-11-04-03.55.21
    problem   : 1335 A. Candies and Two Sisters
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n & 1)
            cout << n / 2 << '\n';
        else
            cout << (n / 2) - 1 << '\n';
    }

    return 0;
}

