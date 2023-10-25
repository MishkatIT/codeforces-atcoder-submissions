/*
    author    : MishkatIT
    created   : Wednesday 2023-10-25-16.15.59
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
    int n, m;
    cin >> n >> m;

    vector<int> score(m);
    for (auto& i: score) {
        cin >> i;
    }

    vector<string> player(n);
    for (auto& i: player) {
        cin >> i;
    }

    int mx = 0;
    vector<int> score_of_player(n);
    for (int i = 0; i < n; i++) {
        int tmax = 0;
        for (int j = 0; j < m; j++) { // m, length of each string
            if(player[i][j] == 'o') {
                tmax += (score[j]);
            }
        }
        tmax += (i + 1);
        score_of_player[i] = tmax;
        mx = max(mx, tmax);
    }
    vector<pair<int, int>> sorted_score(m); // {score, position}
    for (int i = 0; i < n; i++) {
        sorted_score[i] = {score[i], i};
    }
    sort(sorted_score.rbegin(), sorted_score.rend()); // descending sort

    for (int i = 0; i < n; i++) {
        int j = 0;
        int cnt = 0;
        while(score_of_player[i] < mx) {
            if (player[i][sorted_score[j].second] != 'o') {
                score_of_player[i] += sorted_score[j].first;
                cnt++;
            }
            j++;
        }
        cout << cnt << '\n';
    }
    return 0;
}

