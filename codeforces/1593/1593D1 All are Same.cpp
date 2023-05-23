/*
    author    : MishkatIT
    created   : Tuesday 2023-05-23-18.35.14
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
        sort(v.begin(), v.end());
        vector<int> temp;
        for (int i = 1; i < n; i++)
        {
            temp.push_back(abs(v[i] - v[i - 1]));
        }
        int k = 0;
        for (int i = 0; i < temp.size(); i++)
            k = __gcd(k, temp[i]);
        if(!k)
            k = -1;
        cout << k << '\n';
    }
    return 0;
}

