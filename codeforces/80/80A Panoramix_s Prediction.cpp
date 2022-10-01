#include<bits/stdc++.h>
#define nl "\n"
#define yes cout << "YES";
#define no cout << "NO";
#define fori(i) for (i = n+1; i<=m; i++)
#define forj(j) for (int j = 2; j < i; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int n, m,i, cnt;
    cin >> n >> m;
    fori(i)
    {
        cnt=0;
        forj(j)
        {
            if(i%j!=0)
                continue;
            else
                cnt++;
        }
        if(cnt==0)
            goto y;
    }

y:
    if(i==m)
        cout << "YES";
    else
        cout << "NO";


}



