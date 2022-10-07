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
    int n, cntA=0, cntD=0;
    cin >> n;
    string str;
    cin >> str;
    fori(0,n,1)
        if(str[i]=='A')
            cntA++;
        else
            cntD++;
    if(cntA>cntD)
        cout << "Anton";
    else if (cntD>cntA)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}



