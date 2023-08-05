/*
    author    : MishkatIT
    created   : Saturday 2023-08-05-23.28.48
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


void solve()
{
    string str;
    cin >> str;
    int n = str.length();
    auto ok = [&](string x) -> bool{
        return (stoi(x) % 8 == 0);
    };

    auto print = [&](string x) {
        cout << "YES" << '\n' << x;
        return;
    };
    string a, b, c;
    for (int i = 0; i < n; i++) {
        a = str[i];
        if(ok(a)) {
            print(a);
            return;
        }
        for (int j = i + 1; j < n; j++) {
            b = a + str[j];
//             debug(b)
            if(ok(b)) {
                print(b);
                return;
            }
            for (int k = j + 1; k < n; k++) {
                c = b + str[k];
//                debug(c)
                if(ok(c)) {
                    print(c);
                    return;
                }
            }
        }
    }
    cout << "NO" << '\n';
}

int main()
{
    fio;
    solve();
    return 0;
}

