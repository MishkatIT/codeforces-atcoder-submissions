/*
    author    : MishkatIT
    created   : Sunday 2023-06-11-10.54.54
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
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mn = INT_MAX;
        sort(v.begin(), v.end());
        int firstpos;
        for (int i = 1; i < n; i++)
        {
            if(v[i] - v[i - 1] < mn)
            {
                mn = v[i] - v[i - 1];
                firstpos = i - 1;
            }
        }
        cout << v[firstpos] << ' ';
        for (int i = firstpos + 2; i < n; i++)
            cout << v[i] << ' ';
        for (int i = 0; i < firstpos; i++)
            cout << v[i] << ' ';
        cout << v[firstpos + 1] << '\n';
    }
    return 0;
}

