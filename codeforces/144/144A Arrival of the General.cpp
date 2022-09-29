#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < n; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;

int time(int[]);

int main()
{
    fio;
    int n, cnt =0, x=0, y=0, positioni=0, positionj=0;
    cin >> n;
    int arr[n],a[n], j=n;
    fori(i)
    cin >> arr[i];
    copy(arr,arr+n,a);
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=a[n-1] && x==0)
        {
            cnt++;
            positioni++;
        }
        else
            x++;
        j--;
        if(arr[j]!=a[0]&&y==0)
        {
            cnt++;
            positionj++;
        }
        else
            y++;
    }

    if((positioni+positionj)>=n)
        cout << cnt-1;
    else
        cout << cnt;

}


