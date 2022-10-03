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
    int n;
    cin >> n;
    int arr[n];
    fori(0,n,1)
        cin >> arr[i];
    int a = 0;
    int b = n-1;
    int mn = abs(arr[a]-arr[b]);
    fori(0,n-1,1)
        forj(i+1,i+2,1)
        {
            int temp = abs(arr[i]-arr[j]);
            if(temp<mn)
            {
                mn=temp;
                a=i;
                b=j;
            }
        }
    cout << a+1 << ' ' << b+1;
}



