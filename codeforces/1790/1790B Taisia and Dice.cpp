/*
    author    : MishkatIT
    created   : Friday 2023-01-27-20.48.19
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
        int n, s, r;
        cin >> n >> s >> r;
        int a = s - r;
        cout << a << ' ';
        n--;
        int x = r % n;
        int y = r / n;
        for (int i = 0; i < n; i++)
        {
            if(x > 0)
                cout << y + 1 << ' ', x--;
            else
                cout << y  << ' ';
        }
        cout << '\n';
    }
    return 0;
}
