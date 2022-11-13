/*
    author    : MishkatIT
    created   : Sunday 2022-11-13-19.37.18
    problem   : 1738 C. Even Number Addicts
*/
#include<iostream>
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
        int odd = 0;
        int n;
        cin >> n;
        int x = n;
        while(x--)
        {
            int a;
            cin >> a;
            a = abs(a);
            if(a % 2 == 1)
                odd++;
        }
        if((n % 2 == 0) && (odd % 4 == 0 || (odd % 4 == 1 || (odd % 4 == 3))))
            cout << "Alice" << '\n';
        if((n % 2 == 0) && (odd % 4 == 2))
            cout << "Bob" << '\n';
        if((n % 2 == 1) && (odd % 4 == 0 || (odd % 4 == 3)))
            cout << "Alice" << '\n';
        if((n % 2 == 1) && (odd % 4 == 1 || (odd % 4 == 2)))
            cout << "Bob" << '\n';
    }
    return 0;
}


