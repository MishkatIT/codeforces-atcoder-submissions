/*
  author    : MishkatIT
  created   : Friday 2023-09-22-16.43.44
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
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;

        int cntA = count(str.begin(), str.end(), 'A');
        int cntB = str.size() - cntA;
        if(cntA == 0 || cntB == 0) {
            cout << 0 << '\n';
            continue;
        }
        if(str.front() == 'B' || str.back() == 'B') {
            cout << cntA << '\n';
            continue;
        }
        int n = str.length();
        bool consecutiveB = false;
        for (int i = 0; i + 1 < n; i++) {
            if(str[i] == str[i + 1] && str[i] == 'B') {
                consecutiveB = true;
                break;
            }
        }
        if(consecutiveB) {
            cout << cntA << '\n';
            continue;
        }
        int cnt = 0;
        vector<int> consA;
        for (int i = 0; i < n; i++) {
            if(str[i] == 'B') {
                consA.push_back(cnt);
                cnt = 0;
            } else {
                cnt++;
            }
        }
        consA.push_back(cnt);
        sort(consA.begin(), consA.end());
        cout << accumulate(consA.begin() + 1, consA.end(), 0) << '\n';
    }
    return 0;
}

