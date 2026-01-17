#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, ans;
    cin >> s;
    for (auto& c : s) if (string("aeiou") .find(c) == string::npos) cout << c;
}
