#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < word.size(); i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    string word;
    cin >> word;
    int ucase = 0, lcase = 0;
    fori(i)
    {

        if(word[i] >= 97)
            lcase++;
        else
            ucase++;
    }
    if(lcase>ucase || lcase == ucase)
        fori(i)
        word[i]=tolower(word[i]);
    else
        fori(i)
        word[i]=toupper(word[i]);

    cout << word;

}


