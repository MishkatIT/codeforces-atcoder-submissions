#include<iostream>
#define nl "\n"
#define forn(i) for (int i=0; i < col; i++)
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#include<iostream>

using namespace std;
int main()
{
    fio;
    int t, col;
    string str1, str2;
    cin >> t;
    while(t--)
    {
        cin >> col >> str1 >> str2;
        forn(i)
        {
            if(str1[i] == 'G')
                str1[i] = 'B';
        }
        forn(i)
        {
            if(str2[i] == 'G')
                str2[i] = 'B';
        }


        if(str1== str2)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;

    }




}


