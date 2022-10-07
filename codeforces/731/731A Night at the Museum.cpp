#include<bits/stdc++.h>
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
    int cnt=0, a, b;
    string str;
    cin >> str;
    fori(1,str.length(),1)
    {
        if(str[i]>=110)
            a = str[i];
        else
            a = str[i-1];
        if(str[i]<110)
            b = str[i];
        else
            b = str[i-1];
        cnt+=min(abs(str[i]-str[i-1]), (abs(b-97)+abs(a-123)));
    }
    cnt+=min(abs(str[0]-97), (abs(123-str[0])));

    cout <<cnt;
    return 0;
}



