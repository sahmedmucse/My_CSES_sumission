#include<bits/stdc++.h>
using namespace std ;

bool cmp(pair<int,int>x, pair<int,int>y)
{
   if(x.second == y.second)
        {
            return x.first < y.first ;
        }

        return x.second < y.second ;
}

int main()
{
    int n; cin>>n;

    vector<pair<int,int>>v;

    for(int i=0;i<n; i++)
    {
        long long a,b;

        cin>>a>>b;

        v.push_back({a,b});

    }

    long long  ans = 0;
    long long  k;

    sort(v.begin(),v.end(),cmp);

    for(int i=0; i<n; i++)
    {
       if(i==0)
       {
           ans++;
           k=v[i].second;
       }


       if(v[i].first >= k)
       {
           ans++;
           k=v[i].second;
       }
    }
    cout << ans << endl;
}
