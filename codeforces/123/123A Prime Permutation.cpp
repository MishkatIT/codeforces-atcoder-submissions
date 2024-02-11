/*
    author    : MishkatIT
    created   : Sunday 2024-02-11-16.44.42
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1010;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<int> adj[N];

vector<int> temp;
vector<bool> vis(N, false);

void dfs(int i)
{
    vis[i] = true;
    temp.push_back(i);
    for (auto& j :adj[i]) {
        if (!vis[j]) {
            dfs(j);
        }
    }
    sort(temp.begin(), temp.end());
    return;
}

int main()
{
    fio;
    string str;
    cin >> str;
    int n = str.length();
    vector<char> ans(n + 5, '0');
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= i; j++) {
            if (i % j == 0) {
                for (int k = i * 2; k <= n; k += i) {
                    adj[i].push_back(k);
                    adj[k].push_back(i);
                }
                break;
            }
        }
    }

    auto cmp = [](const auto& x, const auto& y) {
        if (x.size() != y.size()) {
            return x.size() > y.size();
        }
        return lexicographical_compare(x.begin(), x.end(), y.begin(), y.end());
    };

    set<vector<int>, decltype(cmp)> connected(cmp);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            connected.insert(temp);
            temp.clear();
        }
    }

    map<char, int> mp;
    for (auto& i : str) {
        mp[i]++;
    }
    priority_queue<pair<int, char>> pq;
    for (auto& i : mp) {
        pq.push({i.second, i.first});
    }


    while(!connected.empty()) {
        int cnt = pq.top().first;
        char c = pq.top().second;
        pq.pop();
        vector<int> cur = *connected.begin();
        if (cnt < cur.size()) {
            break;
        } else {
            connected.erase(connected.begin());
            for (auto& i : cur) {
                ans[i] = c;
                cnt--;
            }
            if (cnt > 0) {
                pq.push({cnt, c});
            }
        }
    }
    if (!connected.empty()) {
        cout << "NO" << '\n';
        return 0;
    }
    cout << "YES" << '\n';
    for (int i = 1; i <= n; i++) {
        cout << ans[i];
    }
    return 0;
}


