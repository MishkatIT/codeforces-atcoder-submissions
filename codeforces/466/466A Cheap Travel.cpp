#include<bits/stdc++.h>
#include<math.h>
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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int x = (n/m)*b;
    int y = (ceil((double)n/m))*b;
    if((b/m)<a)
        cout << min((x+(n%m)*a),y);
    else
        cout << n*a;
}



