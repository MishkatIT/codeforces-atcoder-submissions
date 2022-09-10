#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < n; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
         int x,y;

         cin >> x;
         y = x%7;
         if(x%10<y)
            x += (7-y);
         else
            x -= y;
         cout << x << nl;

    }
}


