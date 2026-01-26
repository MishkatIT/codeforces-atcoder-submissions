/*
    author    : MishkatIT
    created   : Sunday 2023-08-06-00.22.39
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n;
    cin >> n;
    vector<pair<int, int>> v(n); // {value, index}
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = {x, i + 1};         // one based indexing
    }

    // sorting by using a lambda function; minimum value, minimum index.
    auto comp = [&] (auto a, auto b) {
        return (a.first < b.first || (a.first == b.first && a.second < b.second));
    };

    sort(v.begin(), v.end(), comp);
    cout << v.front().first << ' ' << v.front().second;
    return 0;
}