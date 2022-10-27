/*
    author    : MishkatIT
    created   : Friday 2022-10-28-02.22.57
    problem   : 1369 A. FashionabLee
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
        cout << ((long long)n%4? "NO" : "YES") << '\n';
    }

    return 0;
}



