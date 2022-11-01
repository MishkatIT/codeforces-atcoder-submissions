/*
    author    : MishkatIT
    created   : Wednesday 2022-11-02-00.49.17
    problem   : 1476 A. K-divisible Sum
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long cf = (n + k - 1) / k;
        k *= cf;
        cout << (k + n - 1) / n << '\n';
    }

    return 0;
}

