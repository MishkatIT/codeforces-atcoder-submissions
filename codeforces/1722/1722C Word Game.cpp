/*
    author    : MishkatIT
    created   : Monday 2022-10-17-02.55.07
    problem   : 1722 C. Word Game
*/
#include<iostream>
#include<map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map <string, int>mp;
        string str[3][n];
        for (int i=0; i<3; i++)
            for(int j=0; j<n; j++)
            {
                cin >> str[i][j];
                mp[str[i][j]]++;
            }
        for(int i=0; i<3; i++)
        {
            int ans = 0;

            for(int j=0; j<n; j++)
            {
                if(mp[str[i][j]]==2)
                    ans+=1;
                else if (mp [str[i][j]]==1)
                    ans+=3;
            }
            cout << ans << ' ';
        }
        cout << '\n';
    }

    return 0;
}

