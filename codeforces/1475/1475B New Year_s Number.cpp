/*
    author    : MishkatIT
    created   : Sunday 2022-11-13-22.38.54
    problem   : 1475 B. New Year's Number
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
        int n;
        cin >> n;
        if(n >= 2020)
            if((n / 2020 == 0) || (n / 2021 == 0) || ((n % 2020 <= n / 2020)))
            {
                cout << "YES" << '\n';
                continue;
            }

        cout << "NO" << '\n';



    }

    return 0;
}



