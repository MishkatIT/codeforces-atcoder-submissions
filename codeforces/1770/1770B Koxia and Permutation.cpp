/*
    author    : MishkatIT
    created   : Friday 2022-12-30-21.54.55
    problem   : B. Koxia and Permutation
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
        int n, k;
        cin >> n >> k;
        int x = n;
        int y = 1;
        for (int i = 0; i < n; i++)
        {
            cout << x << ' ';
            i++;
            if(i < n)
                cout << y<< ' ';
            x--;
            y++;
        }
        cout << '\n';
    }
    return 0;
}

