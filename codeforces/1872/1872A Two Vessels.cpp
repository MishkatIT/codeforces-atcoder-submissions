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
    int t;
    cin >> t;
    while(t--)
    {
      ld a, b, c;
      cin >> a >> b >> c;
      ld sum = a + b;
      sum = (sum / 2.0);
      ld mx = abs(max(a, b) - sum);
//      debug(mx)
      cout << ceil(mx / c) << '\n';
    }
    return 0;
}