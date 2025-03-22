#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;

	int ans = 0;
	// prime factorize n
	for (long long p = 2; p * p <= n; p++) {
		int exponent = 0;
		while (n % p == 0) {
			exponent++;
			n /= p;
		}
		// decrement the exponent by i each time
		for (int i = 1; exponent - i >= 0; i++) {
			exponent -= i;
			ans++;
		}
	}
	if (n > 1) ans++;

	cout << ans << '\n';
}

// usaco 