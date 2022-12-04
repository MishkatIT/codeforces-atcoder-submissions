/*
    author    : MishkatIT
    created   : Sunday 2022-12-04-23.18.29
    problem   : 1706 A. Another String Minimization Problem
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
        int n, m;
        cin >> n >> m;
        vector<char> v (m, 'B');
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int temp = m + 1 - arr[i];
            int mn = min(arr[i], temp);
            if(v[mn - 1] != 'A')
                v[mn - 1] = 'A';
            else
            {
                if(mn == arr[i])
                    v[temp - 1] = 'A';
                else
                    v[arr[i] - 1] = 'A';
            }
        }
        for (auto i: v)
            cout << i;
        cout << '\n';
    }
    return 0;
}

