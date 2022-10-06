#include<bits/stdc++.h>
#define nl "\n"
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define fori(start,end,increment) for (int i = start; i < end; i+=increment)
#define forj(start,end,increment) for (int j = start; j < end; j+=increment)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int n, cnt=0;
    cin >> n;
    int arr[n];
    fori(0,n,1)
        cin >> arr[i];
    sort(arr, arr+n);
    fori(0,n,1)
            cnt+=arr[n-1]-arr[i];
    cout << cnt;
    return 0;
}



