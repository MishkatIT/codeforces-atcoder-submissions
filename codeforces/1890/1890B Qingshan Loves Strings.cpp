/*
    author    : MishkatIT
    created   : Sunday 2023-10-29-00.00.25
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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        bool ok = true;
        bool usedB = false;
        for (int i = 0; i + 1 < n; i++) {
            if(a[i] == a[i + 1]) {
                usedB = true;
                if(a[i] == b.front() || a[i + 1] == b.back()) {
                    ok = false;
                }
            }
        }
        if(usedB) {
            for (int i = 0; i + 1 < m; i++) {
                ok &= (b[i] != b[i + 1]);
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
/*
1. at first, if the given string 'a' is already good that is a[i] != a[i + 1] holds, then print yes.
2. Otherwise, we may make it good using the secondary string b. but if the b itself does not hold b[i] != b[i + 1] then we can never make the string 'a' good, 
    because we need to make sure that 'b' is good itself and we never can make the 'b' good even if you place the 'b' in 'a' then try to make that part of 'a' good, it'll go infinite and never be possible to make the part of 'b' good, think why :) . 'b' is going to be part of 'a', so it should be good.
3. There is another case :
consider this example: 
a = 1001010
b = 10

if you place 'b' after the 2nd index it would be like this: 10 10 01010 (I've maintained a space for understanding)
again there occurs another place where there are two consecutive zeros. 
so we can come to the conclusion that the front and back characters of the string 'b' should not be the same as the a[i]-th and a[i + 1]-th characters. 
*/
