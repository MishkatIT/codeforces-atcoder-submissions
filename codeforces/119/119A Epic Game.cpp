#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < n; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int gcd(int,int);
int main()
{
    fio;
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    while(arr[2]>0)
    {
        int g = gcd(arr[0],arr[2]);
        arr[2]-=g;
        if(arr[2]<=0)
        {
            cout << "0";
            break;
        }
        g = gcd(arr[1],arr[2]);
        arr[2]-=g;
        if(arr[2]<=0)
        {
            cout << "1";
            break;
        }
    }



}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


