/*
    author    : MishkatIT
    created   : Tuesday 2022-11-29-21.50.25
*/
#include<bits/stdc++.h>1
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
        long long sum = (n * (n + 1)) / 2;
        long long tempSum = 0;
        long long temp = 2;
        while(temp <= n)
        {
            tempSum += temp;
            temp *= 2;
        }
        cout << sum - ((tempSum) * 2) - 2 << '\n';
    }
    return 0;
}


