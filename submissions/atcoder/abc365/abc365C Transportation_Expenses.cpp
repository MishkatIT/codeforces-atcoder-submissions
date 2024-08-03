#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    vector<long long> v(a);
    long long s = 0;
    
    for (auto &u : v) {
        cin >> u;
        s += u;
    }
    
    if (s <= b) {
        cout << "infinite";
    } else {
        long long left = 0, right = *max_element(v.begin(), v.end());
        
        auto cal= [&](long long i) {
            long long total = 0;
            for (int j = 0; j < a; ++j) {
                total += min(i, v[j]);
                if (total > b) {
                    return false;
                }
            }
            return total <= b;
        };
        
        while (left < right) {
            long long mid = left + (right - left + 1) / 2;
            if (cal(mid)) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        
        cout << left;
    }
    
    return 0;
}
