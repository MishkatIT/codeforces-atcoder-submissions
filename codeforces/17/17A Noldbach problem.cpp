#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;


vector<int>prime;
vector<bool> isPrime(N, true);
void sieve() {
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < N; i++) {
        if (isPrime[i]) {
            prime.push_back(i);
        }
    }
}



int main() {
    sieve();
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 0; ; i++) {
        int temp = prime[i] + prime[i + 1] + 1;
        if (temp > n) break;
        if (isPrime[temp]) cnt++;
    }
    cout << (cnt >= k ? "YES" : "NO") << '\n';
    return 0;
}
