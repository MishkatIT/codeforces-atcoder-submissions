/*
    author    : MishkatIT
    created   : Monday 2023-01-30-20.59.45
    problem   : A. Candies
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
        int x = 1;
        int s = 1;
        for (int i = 0; i < n; i++)
        {
            if(n % s == 0 && i > 0)
            {
                cout << n / s << '\n';
                break;
            }
            else
            {
                x *= 2;
                s += x;
            }
        }
    }
    return 0;
}

