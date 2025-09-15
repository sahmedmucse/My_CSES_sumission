#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define yes cout << "YES"<<endl;
#define no cout << "NO"<<endl;
#define testcases int t; cin>>t; while(t--)

#define mod 1000000007;



int main()
{
    optimize() ;

    int n ,limit ;

    cin >> n>>limit;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
       cin >> v[i];
    }

    ll dp[limit+1]={};

    dp[0]=1;

    for(int i=1; i<=limit; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[j] > i) continue;
           dp[i] = (dp[i]+dp[i-v[j]]) % mod ;
        }
    }
    cout << dp[limit]<<endl;


    return 0;
}

/*
The first input line has two integers n and x: the number of coins and the desired sum of money.
The second line has n distinct integers c_1,c_2,\dots,c_n: the value of each coin.
Output
Print one integer: the number of ways modulo 10^9+7.
*/

