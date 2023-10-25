/*

    Created by : Ayon Das Gupta

*/

#include <bits/stdc++.h>
#define ll long long int
#define ki(x) cout << x << '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;

    vector<int> v(m),total(n);
    vector<vector<char>> s(n, vector<char> (m));

    for(int i=0; i<m; i++) cin>>v[i];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
             cin>>s[i][j];
        }
    }

    vector<pair<int,int>> ans,ans2;

    int max1=-1,l;
    for(int i=0; i<n; i++) {
     int sum=i+1;
        for(int j=0; j<m; j++) {
           if(s[i][j]=='o') sum+=v[j];
        }
        //ki(sum);
        total[i]=sum;

        if(sum>max1) {
           max1=sum;
           l=i;
        }
     }

     //ki(max1);
     ans.push_back({l,0});

     for(int i=0; i<n; i++) {
        if(l!=i) ans2.push_back({total[i],i});
     }

     sort(ans2.begin(),ans2.end());

     for(auto &x:ans2) {
        int sum=x.first,count=0;
        //ki(x.first);
        vector<int> tmp;
        for(int i=0; i<m; i++) {
            if(s[x.second][i]=='x') tmp.push_back(v[i]);//unsolved ques
        }

        sort(tmp.rbegin(),tmp.rend());
//        for(auto &i:tmp) cout<<i<<' ';
//        cout<<'\n';

        for(auto &j:tmp) {
            if( sum < max1 ) {
                sum+=j;
                //ki(sum);
                count++;
            }
            else {
                break;
            }
         }
         //ki(max1);
         tmp.clear();
         ans.push_back({x.second,count});
      }

      sort(ans.begin(),ans.end());

      for(auto &i:ans) cout<<i.second<<'\n';

    return 0;
}

