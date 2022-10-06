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
    int num;
    cin >> num;
    fori(1,100000,1)
    {
        forj(2,100,1)
        {
            int a= (num*i+1);
            if(j==a)
                continue;
            {
                if(a%j==0)
                {
                    cout << i;
                    return 0;
                }
            }

        }
    }
}



