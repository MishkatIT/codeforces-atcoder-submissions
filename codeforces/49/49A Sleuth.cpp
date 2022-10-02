#include<bits/stdc++.h>
#define nl "\n"
#define yes cout << "YES";
#define no cout << "NO";
#define fori(i) for (int i = str.length()-1; i>=0; i--)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    string str;
    getline(cin>> ws, str);
    //or getline(cin, str)
    // or cin.getline(str,10); to take input until a specific size
    fori(i)
    {
        if(str[i]== 32|| str[i]==63)
            continue;
        else
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='Y' || str[i]=='y')
                {yes break;}
            else
                {no break;}
    }


}


