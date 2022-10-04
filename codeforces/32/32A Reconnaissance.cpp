#include<bits/stdc++.h>
#define nl "\n"
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
    int n, d, cnt=0;
    cin >> n >> d;
    int arr[n];
    fori(0,n,1)
        cin >> arr[i];
    //sort(arr, arr+n);
    fori(0,n-1,1)
        forj(i+1,n,1)
            if(abs(arr[i]-arr[j])<=d)
                cnt+=2;

    cout << cnt;
    return 0;
}



