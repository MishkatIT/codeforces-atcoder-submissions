/*
    author    : MishkatIT
    created   : Saturday 2023-10-28-20.35.32
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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        bool ok = true;
        if((int)mp.size() <= 2) {
            for (auto& i : mp) {
                ok &= (i.second >= n / 2);
            }
        } else {
            ok = false;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

/*
    if all the numbers are the same then it's obviously possible. 
    what if there are multiple numbers?
    example 1: 1 2 1 1 2 2
    One possible rearrangement is 1 2 1 2 1 2

    example 2: 1 2 1 1 2 
    One possible rearrangement is 1 2 1 2 1 

    example 3: 1 2 1 1 2 1
    One possible rearrangement is 1 2 1 2 1 1; 
    in this case, you'll never make the sum equal. 

    example 4: 1 2 3 1 4 6 5 3
    This is also not possible. 

    did you get the visualization or math behind it? think... :)
*/