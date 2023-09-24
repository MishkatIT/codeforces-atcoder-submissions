/*
    author    : MishkatIT
    created   : Sunday 2023-09-24-12.31.17
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

int dx [] = {-1, 1, 0, 0, -1, 1, -1, 1};
int dy [] = {0, 0, -1, 1, -1, -1, 1, 1};
vector<string> Move = {"U", "D", "L", "R", "LU", "LD", "RU", "RD"};
bool vis[8][8];
set<pair<int, vector<string>>> st;

void bfs(pair<int, int> s, pair<int, int> e)
{
    queue<pair<array<int, 3>, vector<string>>> q;
    q.push({{s.first, s.second, 0}, {}});
    while(!q.empty()) {
        int x = q.front().first[0];
        int y = q.front().first[1];
        int dis = q.front().first[2];

        vector<string> ttt = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && !vis[nx][ny]) {
                vector<string> temp = ttt;
                temp.push_back(Move[i]);
                if(make_pair(nx, ny) == e) {
                    st.insert({dis + 1, temp});

                } else {
                    q.push({{nx, ny, dis + 1}, temp});
                    vis[nx][ny] = true;
                }
            }
        }

    }
}

int main()
{
    fio;
    string a, b;
    cin >> a >> b;
    if(a == b) {
        cout << 0;
        return 0;
    }
    pair<int, int> s, e;
    s = {8 - (a[1] - '0'), a[0] - 'a'};
    e = {8 - (b[1] - '0'), b[0] - 'a'};
    bfs(s, e);
    cout << st.begin() -> first << '\n';
    for (auto& i: st.begin() -> second) {
        cout << i << '\n';
    }
    return 0;
}

