/*
    author    : MishkatIT
    created   : Thursday 2022-11-24-12.58.29
    problem   : 1743 B. Permutation Value
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
        int n;
        cin >> n;
        int x = (n / 2) + 1;
        int y = x + 1;
        for (int i = 1; i <= n; i++)
        {
            if(i <= x)
            {
                cout << i << ' ';
            }
            if(y <= n)
            {
                cout << y << ' ';
                y++;
            }
        }
    }

    return 0;
}



