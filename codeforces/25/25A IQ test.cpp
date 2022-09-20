#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 1; i < 4; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;

int main()
{
    fio;
    int t, num, oddcount=0, evencount=0, cnt=0;
    cin >> t;
    if(t==3)
    {
        fori(i)
        {
            cin >> num;
            if(num%2==1)
            {
                oddcount=i;
                cnt++;
            }
            else
                evencount=i;

        }
        if(cnt>1)
            cout << evencount;
        else
            cout << oddcount;
    }

    else

    {
        int i=0, j=0, k=0;
        while(t--)
        {

            cin >> num;
            k++;

            if(num%2!=0)
            {
                oddcount++;
                i+=k;
            }

            else
            {
                evencount++;
                j+=k;
            }
            if(oddcount>=2 && evencount>=1 || oddcount>=1 && evencount>=2)
                break;


        }
        if(oddcount>1)
            cout << j;
        else
            cout << i;
    }
}




