
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int mn = 1e9;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            mn = min(mn,arr[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) ans += max(0, arr[i] - mn);
        cout << ans << '\n';
    }

    return 0;
}
