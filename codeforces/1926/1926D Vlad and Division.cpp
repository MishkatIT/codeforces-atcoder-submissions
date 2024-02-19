/*
    author    : MishkatIT
    created   : Monday 2024-02-19-21.43.26
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;

string bs(const bitset<32>& bits) {
    return bits.to_string();
}
int minGroups(const vector<int>& num) {

    int n = num.size();
    vector<bitset<32>> invv(n);

    for (int i = 0; i < n; ++i) {
        invv[i] = ~bitset<32>(num[i]);  // Invert all the bits
    }
    map<string, int> mp, cc;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
//            debug(num[i])
        string cur = bs(invv[i]);
        string ttt = bs(num[i]);
//    debug(cur)debug(ttt)
        ttt.erase(ttt.begin());
        cur.erase(cur.begin());
        if (mp.empty()) {
            cnt++;
        }
        else if (mp.find(cur) != mp.end()) {
            if (mp[cur] <= mp[ttt]) {
                cnt++;
            }
        }
        else {
            cnt++;
        }
//        debug(cur)
//        if (mp[ttt] > 0) cnt++;
        mp[ttt]++;
    }

    return cnt;
}


int main() {
    fio;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> num(n);
        for (int i = 0; i < n; ++i) {
            cin >> num[i];
        }

        int result = minGroups(num);
        cout << result << '\n';
    }

    return 0;
}
