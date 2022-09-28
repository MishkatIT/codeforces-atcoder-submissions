#include<bits/stdc++.h>
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
    string str;
    int sum1=0, sum2=0;
    int n;
    cin >>n;
    int j =n;
    cin >> str;
    for(int i = 0; i<=n/2-1; i++)
    {
        j--;
        if((str[i]=='4' || str[i]=='7') && (str[j]== '4' || str[j]=='7'))
        {
            sum1+=(str[i]-'0');
            sum2+=(str[j]-'0');
        }
        else
            goto no;
    }
    if(sum1==sum2)
        cout << "YES";
    else
    {
no:
        cout << "NO";
    }

}



