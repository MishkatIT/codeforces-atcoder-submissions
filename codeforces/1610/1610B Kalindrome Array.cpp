/*
    author    : MishkatIT
    created   : Wednesday 2023-05-24-21.27.28
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
        vector<int>v(n);
        for (auto& i : v)
        {
            cin >> i;
        }
        int l = 0, r = n - 1;
        bool ok = true;
        int temp = 0;
        while(l < r)
        {
            if(v[l] != v[r])
            {
                if(temp == 0)
                    temp = v[l];
                else if(v[l] == temp)
                    l++;
                else if(v[r] == temp)
                    r--;
                else
                {
                    ok = false;
                    break;
                }
            }
            else
                l++, r--;
        }

        if(!ok)
        {
            ok = true;
            temp = 0;
            l = 0, r = n - 1;
            while(l < r)
            {
                if(v[l] != v[r])
                {
                    if(temp == 0)
                        temp = v[r];
                    else if(v[l] == temp)
                        l++;
                    else if(v[r] == temp)
                        r--;
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else
                    l++, r--;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
