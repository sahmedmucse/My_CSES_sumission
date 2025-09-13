#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define yes cout << "YES"<<endl;
#define no cout << "NO"<<endl;
#define testcases int t; cin>>t; while(t--)



int main()
{
    optimize() ;

    int n;
    ll target;

    cin >> n >> target;

    vector<pair<ll,int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());



    for(int i=0; i<n-2; i++)
    {
        int k = target - v[i].first;

        int l =i+1, r = n - 1;


        while (l < r)
        {
            ll sum = v[l].first + v[r].first;
            if (sum == k)
            {
                cout<< v[l].second << " " << v[r].second <<" "<< v[i].second <<"\n";
                return 0;
            }
            else if (sum < k)
            {
                l++;
            }
            else
            {
                r--;
            }
        }

    }



    cout << "IMPOSSIBLE\n";
    return 0;
}

