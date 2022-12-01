/*
    author    : MishkatIT
    created   : Friday 2022-12-02-02.48.01
    problem   : 1728 B. Best Permutation
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
        if(n & 1)
            {
                cout << 1 << ' ';
                for(int i = 1; i < n - 2; i++)
                    if(i & 1)
                        cout << i + 2 << ' ';
                    else
                        cout << i << ' ';
                cout << n - 1 << ' ' << n;
            }
        else
        {
            for (int i = 1; i < n - 1; i++)
                if(i & 1)
                    cout << i + 1 << ' ';
                else
                    cout << i - 1 << ' ';
            cout << n - 1 << ' ' << n;
        }
        cout << '\n';
    }
    return 0;
}

