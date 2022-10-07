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
    int cell, jump, G, T;
    cin >> cell >> jump;
    char arr[cell];
    fori(0,cell,1)
        {
            cin >> arr[i];
            if(arr[i]=='G')
                 G=i;
            else if(arr[i]=='T')
                 T=i;
        }
     if(T<G)
     {
     for(int i= G;i>=T;i-=jump)
     {
         if(arr[i]=='#')
         {
             no return 0;
         }
         else if(arr[i]=='T')
         {
             yes return 0;
         }
     }
     }
     else
     {
     fori(G,T+1,jump)
     {
         if(arr[i]=='#')
         {
             no return 0;
         }
         else if(arr[i]=='T')
         {
             yes return 0;
         }
     }

}
 no return 0;
}



