#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < word.size(); i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    string word, ans = "NO";
    cin >> word;
    fori(i)
    {
        if(word[i]=='H' || word[i]=='Q' || word[i]=='9')
        {
            ans = "YES";
            break;
        }
    }
    cout << ans;

}


