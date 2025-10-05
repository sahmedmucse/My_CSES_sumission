
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// https://www.spoj.com/problems/TDPRIMES/

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL);

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

#define testcases int t; cin >> t; while (t--)
#define endl '\n'

#define vi vector<int>
#define vll vector<ll>

#define pb push_back
#define lp(i,n) for(int i=0; i<n; i++)

#define srt(v) sort(v.begin(),v.end());
#define srtr(v) sort(v.rbegin(),v.rend());

#define gcd(a, b) __gcd(a, b);
#define lcm(a, b) ((a * b) / gcd(a, b));

int main()
{
    int n = 1e8;

    bool isprime[n] ;

    for(int i=2; i<n; i++) isprime[i]=true;

    for(int i=3; i*i<=n; i+=2)
    {
        if(isprime[i] == true )
        {
            for(int j=i*3; j<n; j+=(i*2))
            {
                isprime[j]=false;
            }
        }
    }

    vector<int>primes={2};

    for(int i=3; i<n; i+=2)
    {

        if(isprime[i] == true ) primes.push_back(i);
    }

    for(int i=0; i<primes.size(); i+=100)
    {
        cout << primes[i]<<endl;
    }
}
