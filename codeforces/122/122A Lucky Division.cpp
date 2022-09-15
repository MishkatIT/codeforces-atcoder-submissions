#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 4; i< 1010; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;

void divisible(int num)
{
    string ans = "NO";
    fori(i)
    {
        int b = 0;
        int temp = i;
        while(temp!=0)
        {
            int rem = temp%10;
            temp/=10;
            if(rem == 4 || rem == 7)
                continue;
            else
                b++;
        }
        if(b==0)
            if(num%i == 0)
            {
                ans = "YES";
                break;
            }
    }
    cout << ans;


}

int main()
{
    fio;
    int number;
    cin >> number;
    divisible(number);
}


