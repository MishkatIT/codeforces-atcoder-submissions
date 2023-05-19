/*
    author    : MishkatIT
    created   : Friday 2023-05-19-21.13.54
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>odd, even;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x & 1)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        bool ok = false;

        if(odd.size() == 0 || even.size() == 0)
            ok = true;
        else if(odd[0] < even[0])
            ok = true;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

