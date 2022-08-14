#include<iostream>
#include<list>
#include<cstring>
using namespace std;

int main()
{
    int n;
    string word;
    cin >> n;

    while(n--)
    {
        cin >> word;
        int sz = word.length();
        if(sz > 10)
            cout << word.front() << sz-2 << word.back() << endl;
        else
            cout << word << endl;
    }

}
