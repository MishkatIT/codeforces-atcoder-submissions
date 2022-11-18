/*
    author    : MishkatIT
    created   : Friday 2022-11-18-21.37.50
    problem   : 1759 B. Lost Permutation
*/
#include<iostream>
#include<algorithm>
#include<vector>
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
        vector<int>v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        v.push_back(0);
        bool ok = false;
        for(int i = 1; m > 0; i++)
        {
            if(v[i - 1] != i)
            {
                v.insert(v.begin() + i - 1, i);
                m -= i;
            }
        }
        if(m == 0)
            ok = true;
        for(int i = 1; i < v.size(); i++)
        {
            if(v[i - 1] != i)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
