/*
    author    : MishkatIT
    created   : Tuesday 2022-10-11-22.44.33
    problem   : 1741 B. Funny Permutation
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    long long int t, n, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n==3)
            cout << -1 << '\n';
        else
        {
            cout << n << ' ' << n-1 << ' ';
            for(i=1; i<n-1; i++)
                cout << i << ' ';
            cout << '\n';

        }
    }
}




