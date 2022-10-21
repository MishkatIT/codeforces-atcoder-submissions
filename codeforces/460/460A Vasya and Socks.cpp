/*
    author    : MishkatIT
    created   : Friday 2022-10-21-22.36.02
    problem   : 436 A. Vasya and Socks
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int total(int, int);
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    cout << total(n, m);

    return 0;
}
int total (int n, int m)
{
    static int ans = n;

    if(n<m)
        return ans;
    else
    {
        ans+=(n/m);
        n=(n/m)+(n%m);
        total(n, m);

    }
}

