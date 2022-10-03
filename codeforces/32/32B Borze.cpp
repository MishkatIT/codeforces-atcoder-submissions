#include<bits/stdc++.h>
#define nl "\n"
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
    string str;
    int res[210];
    int cnt=0;
    cin >> str;
    int len=str.length();
    fori(0,len,1)
    {

        if(str[i]=='.')
            res[cnt]=0;
        else if(str[i]=='-')
        {
            if(str[i+1]=='-')
                res[cnt]=2;
            else
                res[cnt]=1;
            i++;
        }
        cnt++;
    }
    for(int i=0; i<cnt; i++)
        cout << res[i];
}



