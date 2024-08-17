/*
    Author: TRIDIB DEB PABEL
    Date: 17-08-2024
*/
 
#include <bits/stdc++.h>
using namespace std;
#define taratari ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ull unsigned long long int
#define ll long long
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


void create(int N, int K, const vector<int>& R, vector<int>& current, int index) {
    if (index == N) {
        int sum = 0;
        for (int num : current) {
            sum += num;
        }
        if (sum % K == 0) {
            for (int i = 0; i < N; ++i) {
                cout << current[i] << (i == N-1 ? '\n' : ' ');
            }
        }
        return;
    }

    for (int val = 1; val <= R[index]; ++val) {
        current[index] = val;
        create(N, K, R, current, index + 1);
    }
}

int main() {
    taratari;
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    for (int i = 0; i < N; ++i) {
        cin >> R[i];
    }

    vector<int> current(N, 0);
    create(N, K, R, current, 0);

    return 0;
}
