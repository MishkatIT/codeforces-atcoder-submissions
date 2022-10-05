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
    int a, b, c, cnt=0;
    cin >> a >> b >> c;
    int x = max(a,b);
    int y = min(a,b);
    fori(x,c+1,x)
        forj(y,i+1,y)
            if(i==j)
                cnt++;

    cout << cnt;
    return 0;
}
