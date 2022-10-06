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
    int p, m, cnt=0;
    cin >> p >> m;
    m = (240-m);
    fori(1,p+1,1)
        {
            int x = 5*i;
            if(x<=m)
                {
                    cnt++;
                    m-=x;
                }
            else
                break;
        }
    cout << cnt;
    return 0;
}



