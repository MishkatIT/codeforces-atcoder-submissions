#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < n; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
#include<cmath>
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int t,n,m;
    cin >> t;
    while(t--)
    {
        cin >> n >>m;
        cout << ceil((double)n/2) << " " << ceil((double)m/2) << nl;
    }
}



