/*
    author    : MishkatIT
    created   : Wednesday 2024-02-28-23.53.14
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string temp;
        while(temp.size() < k) {
            for (int j = 0; j < (n - i); j++) {
                if (temp.size() == k) break;
                temp += str[j];
            }
        }
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    cout << v.front();
    return 0;
}


