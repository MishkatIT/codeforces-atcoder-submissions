/*
    Author: TRIDIB DEB PABEL
    Date: 27-07-24
*/

#include <bits/stdc++.h>
using namespace std;
#define taratari ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ull unsigned long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(), v.end()
#define endl '\n'
#define rep(i, a, n) for (int i = a; i < n; i++)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define pb push_back
#define ff first
#define ss second
#define allsort(v) sort(v.begin(), v.end())
#define szv (int)v.size()
#define szs (int)s.size()
#define ft front()
#define bk back()
const int mod = 1e9 + 7;

int main() {
    taratari;
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    bool pabel = false;
    int i;
    for (i = 0; i < n - 1; i++) {
        if (s[i] == "sweet" && s[i + 1] == "sweet") {
            pabel = true;
            break;
        }
    }
    if (pabel) {
        if (i == (n - 2)) {
            cout<<"Yes";
        } else {
            cout<<"No";
        }
    } else {
        cout<<"Yes";
    }

    return 0;
}
