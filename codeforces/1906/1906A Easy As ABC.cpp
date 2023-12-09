/*
    author    : MishkatIT
    created   : Saturday 2023-12-09-20.09.29
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

// eight directional array
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

int main()
{
    fio;
    int n = 3;
    char arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    string ans = "ZZZ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int p = 0; p < 8; p++) {
                int px = i + dx[p];
                int py = j + dy[p];
                if (px >= 0 && py >= 0 && px < n && py < n) {
                    for (int k = 0; k < 8; k++) {
                        int kx = px + dx[k];
                        int ky = py + dy[k];
                        if (kx >= 0 && ky >= 0 && kx < n && ky < n && (kx != i || ky != j)) {
                            string temp = "";
                            temp += arr[i][j];
                            temp += arr[px][py];
                            temp += arr[kx][ky];

                            if (temp.size() == 3) {
                                ans = min(ans, temp);
                            }
                        }
                    }
                }
            }
        }
    }

    cout << ans;
    return 0;
}


