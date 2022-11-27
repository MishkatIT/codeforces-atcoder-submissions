/*
    author    : MishkatIT
    created   : Sunday 2022-11-27-19.20.23
    problem   : 1352 B. Same Parity Summands
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
        int n, k;
        cin >> n >> k;
        if(n < k)
            cout << "NO" << '\n';
        else if(n == k)
        {
            cout << "YES" << '\n';
            for (int i = 0; i < n; i++)
                cout << 1 << ' ';
            cout << '\n';
        }
        else if((n & 1) && (k & 1))
        {
            cout << "YES" << '\n';
            for (int i = 0; i < k - 1; i++)
                cout << 1 << ' ';
            cout << n - k + 1 << '\n';
        }
        else if((n & 1) && !(k & 1))
            cout << "NO" << '\n';
        else if(!(n & 1) && !(k & 1))
        {
            cout << "YES" << '\n';
            for (int i = 0; i < (k - 1); i++)
                cout << 1 << ' ';
            cout << n - k + 1 << '\n';
        }
        else
        {
            if(n < (2 * k))
                cout << "NO" << '\n';
            else
            {
                cout << "YES" << '\n';

                for (int i = 0; i < (k - 1); i++)
                    cout << 2 << ' ';
                cout << n - (k - 1) * 2 << '\n';
            }
        }
    }
    return 0;
}


