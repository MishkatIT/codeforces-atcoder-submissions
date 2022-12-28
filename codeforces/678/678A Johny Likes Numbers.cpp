/*
    author    : MishkatIT
    created   : Wednesday 2022-12-28-22.31.32
    problem   : A. Johny Likes Numbers
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long n, k;
    cin >> n >> k;
    cout << n + k - (n % k);
    return 0;
}

