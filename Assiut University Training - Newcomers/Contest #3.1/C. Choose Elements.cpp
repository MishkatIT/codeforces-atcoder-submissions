/*
    author    : MishkatIT
    created   : Wednesday 2023-08-09-13.16.41
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.rbegin(), v.rend()); // sorting the elements in descending order.
                                // It's beneficial to pick the larger elements using k operations than the smaller one.
    long long sum = 0;  // using long long;
                        // reason: let's consider the uppermost case.
                        //     If the value of every element is 10^9 and number of elements (n) is 10^3
                        //     then the total summation will be 10^3 * 10^9 = 10^12;
                        //     which can't be contained in int data type.
    for (int i = 0; k > 0; i++) {
      sum += max(v[i], 0);      // negative values will decrease the sum, so it's better not to pick them.
      k--;
    }
    cout << sum;
    return 0;
}