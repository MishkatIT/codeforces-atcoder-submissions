#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x, a, b;
    cin >> x >> a >> b;

    if (b <= a) cout << "delicious" << '\n';
    else if (b <= a + x) cout << "safe" << '\n';
    else cout << "dangerous" << '\n';

    return 0;
}
