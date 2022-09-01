#include<iostream>
#define nl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(i) for (int i=0; i < len; i++)
using namespace std;
int main()
{
    fio;
    int t, len, cnt;
    string str, strr= "Timur";
    cin >> t;
    while(t--)
    {
        cnt = 0;
        cin >> len >> str;

        forn(i)
        {
            for (int j=0; j < len; j++)
            {
                if(strr[i] == str[j])
                {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt == 5 && len == 5)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

}

