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
    int a, b;
    cin >> a >> b;
    int numer = 6-max(a,b)+1;
    int denom = 6;
    fori(2,7,1)
    {
        if(numer%i==0 && denom%i==0)
        {
            numer/=i;
            denom/=i;
        }
    }
    cout << numer << "/" << denom;

    return 0;
}
