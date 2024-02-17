/*
    author    : MishkatIT
    created   : Saturday 2024-02-17-16.13.02
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#define int long long
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

//King's move
int dy[] = {+1, -1, +0, +0, +1, +1, -1, -1};
int dx[] = {+0, +0, -1, +1, -1, +1, -1, +1};
//          R   L   U   D   RU  RD  LU  LD

struct node {
    int x, y;

    // Define operator< for the node structure
    bool operator<(const node& other) const {
        if (x != other.x) return x < other.x;
        return y < other.y;
    }
};

node s, e;
map<node, bool> mp;
int ans = -1;
map<pair<int, int>, bool> vis;

void bfs()
{
    queue<pair<node, int>> q;
    q.push({s, 0});

    while(!q.empty()) {
        s = q.front().first;
        int x = s.x;
        int y = s.y;
        int moves = q.front().second;
        q.pop();
         if (x == e.x && y == e.y) {
            ans = moves;
            return;
        }
        if (vis[{x, y}]) continue;
        vis[{x, y}] = true;
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (mp[{nx, ny}]) {
                q.push({{nx, ny}, moves + 1});
            }
        }
    }

}

signed main()
{
    fio;
    cin >> s.x >> s.y >> e.x >> e.y;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;
        node temp;
        cin >> temp.x >> temp.y;
        for (int i = temp.x; i <= temp.y; i++) {
            mp[{r, i}] = true;
        }
    }
    bfs();
    cout << ans << '\n';
    return 0;
}


