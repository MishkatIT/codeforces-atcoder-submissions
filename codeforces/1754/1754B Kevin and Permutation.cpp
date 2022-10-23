/*
    author    : MishkatIT
    created   : Sunday 2022-10-23-15.43.03
    problem   : 1754 B. Kevin and Permutation
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
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
        if(n==2)
            cout << "1 2\n";
        else
        {
            int y = (n/2)+1;
            for(int i=1, x = 1; i<=n; i+=2)
            {
                cout << y << ' ';
                y++;
                if(i>=n)
                    break;
                cout << x << ' ';
                x++;
            }
            cout << '\n';
        }
    }

    return 0;
}

