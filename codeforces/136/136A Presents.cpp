#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < n; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int n, x;
    cin >> n;
    int arr[n];
    fori(i)
    {
        cin >> x;
        arr[x-1]=i;
    }
    fori(i)
    cout << arr[i]+1 << ' ';

}


