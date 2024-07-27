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
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    char arr[a + 5][b + 5];
    memset(arr, '#', sizeof(arr));
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cin >> arr[i][j];
        }
    }
    string s;
    cin >> s;
    int y = m;
    int z = n;
    for (char c : s) {
        if (c == 'U' && y > 1 && arr[y - 1][z] == '.') {
            y = y - 1;
        } else if (c == 'D' && y < a && arr[y + 1][z] == '.') {
            y = y + 1;
        } else if (c == 'L' && z > 1 && arr[y][z - 1] == '.') {
            z = z - 1;
        } else if (c == 'R' && z < b && arr[y][z + 1] == '.') {
            z = z + 1;
        }
    }
    cout << y << " " << z << endl;

    return 0;
}
