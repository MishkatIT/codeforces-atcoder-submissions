#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        int a, b;
        cin >> a >> b;
        a ^= b;
        cout << (-a & a) << '\n';
    }
    return 0;
}