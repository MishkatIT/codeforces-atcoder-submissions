#include<bits/stdc++.h>
#define nl "\n"
#define fori(start,end,increment) for (int i = start; i < end; i+=increment)
#define forj(start,end,increment) for (int j = start; j < end; j+=increment)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int day(int);
int main()
{
    fio;
    int totalPg;
    cin >>totalPg;
    cout <<  day(totalPg);
    return 0;
}
/*---------------------------------------------------------------------
Function to find out on which day the reading of the book is finished*/
int day(int p)
{
    int arr[7], cnt=0;
    fori(0,7,1)
        cin >> arr[i];
start:
    for(int i=0; i<7; i++)
    {
        if(p>0)
        {
            p-=arr[i];
            cnt++;
        }
        else
            return cnt;
    }
    if(p>0)
    {
        cnt=0;
        goto start;
    }
    return cnt;
}




