/*
    author    : MishkatIT
    created   : Friday 2022-10-21-23.48.49
    problem   : 1613  A. Long Comparison
*/
#include<iostream>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long double a, b, c, d;
        cin >> a >> b >> c >> d;
        int mn = min(b, d);
        b-=mn;
        d-=mn;
        if(b>=7)
            cout << ">" << '\n';
        else if(d>=7)
            cout << "<" << '\n';

        else
        {
            a=a*(pow(10, b));
            c=c*(pow(10, d));
            if(a>c)
                cout << ">" << '\n';
            else if(a<c)
                cout << "<" << '\n';
            else
                cout << "=" << '\n';
        }
    }

    return 0;
}
