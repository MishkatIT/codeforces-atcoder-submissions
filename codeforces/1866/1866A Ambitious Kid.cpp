#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin >> a[i];
        a[i] = abs(a[i]);
    }
    sort(a, a+n);
    cout << a[0] << endl;
    return 0;
}