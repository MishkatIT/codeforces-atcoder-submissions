#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (i = 0; i < 5; i++)
#define forj(j) for (j = 0; j < 2; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
//these two functions will be used to find min and max off day
int minimum(int);
int maximum (int);
int main()
{
    fio;
    int num;
    cin >> num;
    cout << minimum(num) << nl;
    cout << maximum(num);
}
//finding the minimum off day
int minimum(int n)
{
    int i,j;
    static int mn=0;
    fori(i)
    if(n>0)
        n--;
    else
        return (mn);

    forj(j)
    if(n>0)
    {
        n--;
        mn++;
    }
    if(n>0)
        minimum(n);
    else
        return (mn);

}

//finding the maximum off day
int maximum(int n)
{
    int i,j;
    static int mx=0;
    forj(j)
    if(n>0)
    {
        n--;
        mx++;
    }
    else
        return (mx);

    fori(i)
    if(n>0)
        n--;
    if(n>0)
        maximum(n);
    else
        return (mx);

}


