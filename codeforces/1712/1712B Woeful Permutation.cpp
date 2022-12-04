/*
    author    : MishkatIT
    created   : Monday 2022-12-05-02.12.23
    problem   : B. Woeful Permutation
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
            cout << "1 ";
            for (int i = 2; i <= n; i += 2)
                cout << i + 1 << ' ' << i << ' ';
        }
        else
        {
            for (int i = 1; i <= n; i += 2)
                cout << i + 1 << ' ' << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}

