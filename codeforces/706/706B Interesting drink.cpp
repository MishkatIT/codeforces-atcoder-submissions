/*
    author    : MishkatIT
    created   : Tuesday 2022-11-08-20.57.40
    problem   : 706 B. Interesting drink
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr + 1, arr + 1 + n);
    int q;
    cin >> q;
    while(q--) {
        int m;
        cin >> m;
        int l = 1;
        int r = n;
        int ans = 0;
        while(l <= r) {                 // using binary search...
            int mid = (l + r) / 2;
            if(arr[mid] <= m) {
                l = mid + 1;
                ans = mid;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

