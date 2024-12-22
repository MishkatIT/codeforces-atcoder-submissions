#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    } 

    int ans = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            int last = -1;
            int cnt = 1;
            for (int k = j; k < n; k += i) {
                if (h[k] == last) {
                    cnt++;
                    ans = max(ans, cnt);
                } else {
                    cnt = 1;
                    last = h[k];
                }
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
