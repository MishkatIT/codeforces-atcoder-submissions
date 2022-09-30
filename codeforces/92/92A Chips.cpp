#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for() (int i = 0; i < n; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
 int i;
 start:
    for(i=1; i<=n; i++)
    {
        if(m>=i)
            m-=i;
        else
            if(m<i)
                goto ending;


    }
    if(m>=1 && i>n)
        goto start;
     else
     ending:
        cout << m;


}


