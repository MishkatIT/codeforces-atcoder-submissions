/*
    author    : MishkatIT
    created   : Saturday 2023-03-18-01.00.09
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int>v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int l = 0, r = n - 1, last = 0;
    vector<char> ans;
    while(l <= r)
    {
        if(v[l] > last && v[r] > last)
        {
            if(v[l] > v[r])
            {
                ans.push_back('R');
                last = v[r];
                r--;
            }
            else
            {
                ans.push_back('L');
                last = v[l];
                l++;
            }
        }
        else if(v[l] > last)
        {
            ans.push_back('L');
            last = v[l];
            l++;
        }
        else if(v[r] > last)
        {
            ans.push_back('R');
            last = v[r];
            r--;
        }
        else break;
    }
    cout << (int)ans.size() << '\n';
    for(auto &i : ans)
        cout << i;
    return 0;
}

