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
        vector<int>v(1001, 0);
        int temp, cnt = 0;
        while(n--)
        {
            cin >> temp;
            v[temp] = temp;
            cnt++;
        }
        bool ok = false;
        for (int i = 1; m > 0; i++)
        {
            if (v[i] == 0)
            {
                v[i] = i;
                m -= i;
                cnt++;
            }
        }
        if(cnt == *max_element(v.begin(), v.end()) && m == 0)
            ok = true;
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
