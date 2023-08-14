/*
    author    : MishkatIT
    created   : Saturday 2023-08-05-18.33.24
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
        int n;
        cin >> n;
        vector<vector<int>> v(n + 1, vector<int> (6));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 5; j++) {
                cin >> v[i][j];
            }
        }
        int superior = 1;
        for (int i = 1; i <= n; i++) {
            int cnt = 0;
            for (int j = 1; j <= 5; j++) {
                if(v[i][j] < v[superior][j]) cnt++;
            }
            if(cnt >= 3) {
                superior = i;
            }
        }
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            int cnt = 0;
            for (int j = 1; j <= 5; j++) {
                if(v[superior][j] > v[i][j]) cnt++;
            }
            if(cnt >= 3) {
                ok = false;
                break;
            }
        }
        if(!ok) {
            cout << -1 << '\n';
        } else {
            cout << superior << '\n';
        }
    }
    return 0;
}

