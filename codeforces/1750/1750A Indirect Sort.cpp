/*
    author    : MishkatIT
    created   : Sunday 2022-11-06-22.24.55
    problem   : A. Indirect Sort
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
        int x;
        cin >> x;
        if(x == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        for (int i = 1; i < n; i++)
            cin >> x;
    }

    return 0;
}

