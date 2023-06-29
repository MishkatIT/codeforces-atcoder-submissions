/*
    author    : MishkatIT
    created   : Thursday 2023-06-29-23.22.04
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
        vector<int> v(n);
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        if(mx == 0) mx = 1;
        vector<char> x(mx, 'a');
        for (int i = -1; i < n; i++)
        {
            if(i != -1)
            {
                for (int z = v[i]; z < mx; z++)
                    x[z] = (x[z] == 'a' ? 'b' : 'a');
            }
            for (auto& j: x)
                cout << j;
            cout << '\n';
        }
    }
    return 0;
}

