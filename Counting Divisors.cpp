#include <bits/stdc++.h>
using namespace std;
#define ll long long

// https://cses.fi/problemset/task/1713/

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);

#define yes cout << "YES"<<endl;
#define no cout << "NO"<<endl;

#define testcases int t; cin>>t; while(t--)
#define endl '\n'

#define vi vector<int>
#define vll vector<ll>

#define pb push_back;
#define lp(i,n) for(int i=0; i<n; i++)

#define srt(v) sort(v.begin(),v.end());
#define srtr(v) sort(v.rbegin(),v.rend());

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b)


int main()
{
    optimize()

    int n = 1000001;
    ll a[n+1];

    for(int i=0; i<n; ++i)
    {
        a[i] = 0;
    }

    for(int i=1; i<n; i++)
    {
        for(int j=i; j<n; j+=i)
        {
            a[j]++;
        }
    }

    int t ; cin>>t;

    while(t--)
    {
        ll x ; cin>>x;
        cout << a[x]<<endl;
    }


    return 0;
}


