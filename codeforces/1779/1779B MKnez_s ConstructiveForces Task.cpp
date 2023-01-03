/*
    author    : MishkatIT
    created   : Tuesday 2023-01-03-21.25.29
    problem   : B. MKnez's ConstructiveForces Task
*/
#include<bits/stdc++.h>
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
        if(n <= 3)
        {
            if(n == 2)
            {
                cout << "YES" << '\n';
                cout << "9 5" << '\n';
            }
            else
                cout << "NO" << '\n';
            continue;
        }
        if(n & 1)
        {
            cout << "YES" << '\n';
            int temp = n / 2;
            for (int i = 0; i < n; i++)
                if(!(i & 1))
                    cout << (-1 * (temp - 1)) << ' ';
                else
                    cout << temp << ' ';
        }
        else
        {
            cout << "YES" << '\n';
            for (int i = 0; i < n; i++)
                if(!(i & 1))
                    cout << -1 << ' ';
                else
                    cout << 1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}

